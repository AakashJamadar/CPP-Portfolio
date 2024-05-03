#include <iostream>
#include <thread>
#include <unistd.h>


void taskA(){
    for(int i=0;i<10;i++){
        sleep(1);
        std::cout<<"taskA:"<<i<<std::endl;
    }
}

void taskB(){
    for(int i=0;i<10;i++){
      sleep(1);
      std::cout<<"taskB:"<<i<<std::endl;
    }
}

int main(){
    std::thread thr_1(taskA);
    std::thread thr_2(taskB);

    thr_1.join();
    thr_2.join();
    return 0;
}

