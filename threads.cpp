#include <iostream>
#include <thread>
#include <unistd.h>


void taskA(){
    for(int i=0;i<10;i++){
        sleep(1);
        printf("taskA:%d\n",i);
        fflush(stdout);
    }
}

void taskB(){
    for(int i=0;i<10;i++){
      sleep(1);
      printf("taskB:%d\n",i);  
      fflush(stdout);
    }
}

int main(){
    std::thread thr_1(taskA);
    std::thread thr_2(taskB);

    thr_1.join();  //used to make int main to wait untill it's children(here,taskA and taskB) gets executed
    thr_2.join();  //if not used main thread exits making the children orphan processes
    return 0;
}

