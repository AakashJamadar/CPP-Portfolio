#include <iostream>
#include <thread>

int count=0;

void task(){
    for(int i=0;i<1000000;i++){
        count++;
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