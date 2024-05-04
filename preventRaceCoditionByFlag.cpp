#include <iostream>
#include <thread>

int turn=0;

void process1(){
    while(1){
        while(turn!=0);  //waits untill process 2 is completed
        //critical section
        turn=1;  //give turn to process 2
        //remainder section
    }
}

void process2(){
    while(1){
        while(turn!=1);  //waits untill process 1 is completed
        //critical section
        turn=0;  //give turn to process 1
        //remainder section
    }
}

int main(){
    std::thread t1(process1);
    std::thread t2(process2);
    t1.join();
    t2.join();
    return 0;
}
//we found mutual exclusion here but
//progress problem remains 
//i,e thread which is ready should get executed,here there is a fixed order depending on the turn value