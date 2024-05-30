#include <iostream>
#include <thread>

int turn=0;
bool flag[2]={false,false};

void process0(){
    while(1){
        flag[0]=true;
        turn=1;
        while(turn==1 && flag[1]==true); //busy wait
            //critical section 1
            flag[0]=false;
    }
}

void process1(){
    while(1){
        flag[1]=true;
        turn=0;
        while(turn==0 && flag[0]==true);  //busy wait
        //critical section 2
        flag[1]=false;
    }
}

int main(){
    std::thread t1(process0);
    std::thread t2(process1);
    t1.join();
    t2.join();
    return 0;
}

//This solves both Mutual exclusion and progress but
//this works only for 2 threads