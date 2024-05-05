#include <iostream>
#include <thread>
#include <mutex>
#include <condition_variable>
#include <chrono>

std::condition_variable cond;
std::mutex mtx;
int done=1;

void  task(){
    std::unique_lock <std::mutex> lock(mtx);
    if(done==1){
        done=2;
        std::cout<<"waiting on condition variable cond"<<std::endl;
        cond.wait(lock);
        std::cout<<"condition met"<<std::endl;
    }else{
        std::cout<<"signaling condition variable cond"<<std::endl;
        cond.notify_one();
    }
    lock.unlock();
    std::cout<<"returning thread"<<std::endl;
}

int main(){
    std::thread t1(task);
    std::this_thread::sleep_for(std::chrono::seconds(1));
    std::thread t2(task);
    t1.join();
    t2.join();
    return 0;
}