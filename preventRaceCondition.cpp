#include <iostream> 
#include <thread>
#include <mutex>

int count=0;
std::mutex mtx;

void task(){
    for(int i=0;i<1000000;i++){
        mtx.lock();
        count++;
        mtx.unlock();
    }
}

int main(){
    std::thread t1(task);
    std::thread t2(task);
    t1.join();
    t2.join();
    std::cout<<count;
    return 0;
}