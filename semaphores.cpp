#include <iostream>
#include <thread>
#include <mutex>
#include <chrono>
#include <condition_variable>

std::mutex mtx;
std::condition_variable cv;
int semaphore_count=3;

void acquire(){
    std::unique_lock<std::mutex> lock(mtx);
    cv.wait(lock,[]{return semaphore_count>0;});
    semaphore_count--;
}

void release(){
    std::unique_lock<std::mutex> lock(mtx);
    semaphore_count++;
    cv.notify_one();
}

void task(std::string name){
    acquire();
    for(int i=0;i<5;i++){
        std::cout<<name<<" working"<<std::endl;
        std::this_thread::sleep_for(std::chrono::seconds(3));
        release();
    }
}

int main(){
    std::thread t1(task,"thread-1");
    std::thread t2(task,"thread-2");
    std::thread t3(task,"thread-3");
    std::thread t4(task,"thread-4");
    std::thread t5(task,"thread-5");

    t1.join();
    t2.join();
    t3.join();
    t4.join();
    t5.join();
    return 0;
}