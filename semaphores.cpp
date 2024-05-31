#include <iostream>
#include <thread>
#include <mutex>
#include <chrono>
#include <condition_variable>

std::mutex mtx;
std::condition_variable cv;
int semaphore_count=3;

void acquire(){                             //no inbuilt acquire function in cpp unlike python
    std::unique_lock<std::mutex> lock(mtx);
    cv.wait(lock,[]{return semaphore_count>0;});
    semaphore_count--;
}

void release(){                             //no inbuilt release function in cpp unlike python
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

// Sure, let's go through the code line by line to understand how it works:

// Includes and Global Variables
// cpp
// Copy code
// #include <iostream>
// #include <thread>
// #include <mutex>
// #include <chrono>
// #include <condition_variable>

// std::mutex mtx;
// std::condition_variable cv;
// int semaphore_count=3;
// Includes: The necessary libraries for multithreading (<thread>), mutual exclusion (<mutex>), time management (<chrono>), 
// and condition variables (<condition_variable>) are included.
// Global Variables:
// mtx is a mutex to control access to shared resources.
// cv is a condition variable used to block or wake up threads.
// semaphore_count is an integer acting as a semaphore to limit the number of threads that can access a resource concurrently.
// Acquire Function
// cpp
// Copy code
// void acquire(){
//     std::unique_lock<std::mutex> lock(mtx);
//     cv.wait(lock,[]{return semaphore_count>0;});
//     semaphore_count--;
// }
// Lock Acquisition: std::unique_lock<std::mutex> lock(mtx); locks the mutex mtx ensuring exclusive access to the critical section.
// Condition Wait: cv.wait(lock,[]{return semaphore_count>0;}); waits for the condition variable cv to be notified and the lambda 
// function []{return semaphore_count>0;} to return true. This means the thread will wait until semaphore_count is greater than 0.
// Decrement Semaphore: semaphore_count--; decrements the semaphore count, indicating that one more thread has acquired the resource.
// Release Function
// cpp
// Copy code
// void release(){
//     std::unique_lock<std::mutex> lock(mtx);
//     semaphore_count++;
//     cv.notify_one();
// }
// Lock Acquisition: Similar to the acquire function, the mutex mtx is locked.
// Increment Semaphore: semaphore_count++; increments the semaphore count, indicating that a thread has released the resource.
// Notify One: cv.notify_one(); wakes up one of the threads waiting on the condition variable cv.
// Task Function
// cpp
// Copy code
// void task(std::string name){
//     acquire();
//     for(int i=0;i<5;i++){
//         std::cout<<name<<" working"<<std::endl;
//         std::this_thread::sleep_for(std::chrono::seconds(3));
//         release();
//     }
// }
// Acquire Resource: Calls acquire() to attempt to acquire the semaphore.
// Work Simulation:
// Loop: for(int i=0;i<5;i++) iterates 5 times.
// Output: std::cout<<name<<" working"<<std::endl; prints a message indicating the thread is working.
// Sleep: std::this_thread::sleep_for(std::chrono::seconds(3)); makes the thread sleep for 3 seconds to simulate work.
// Release Resource: Calls release() to release the semaphore after each iteration.
// Main Function
// cpp
// Copy code
// int main(){
//     std::thread t1(task,"thread-1");
//     std::thread t2(task,"thread-2");
//     std::thread t3(task,"thread-3");
//     std::thread t4(task,"thread-4");
//     std::thread t5(task,"thread-5");

//     t1.join();
//     t2.join();
//     t3.join();
//     t4.join();
//     t5.join();
//     return 0;
// }
// Thread Creation:
// std::thread t1(task,"thread-1"); creates a thread t1 that runs the task function with the argument "thread-1".
// Similarly, t2, t3, t4, and t5 are created running task with different names.
// Thread Joining:
// t1.join(); waits for t1 to finish execution.
// Similarly, t2.join();, t3.join();, t4.join();, and t5.join(); wait for their respective threads to finish execution.
// Return 0: The main function returns 0, indicating successful completion of the program.
// Summary
// The program uses a semaphore mechanism to limit the number of threads (up to 3) that can simultaneously access a 
// critical section (simulated by a 3-second work period). Threads acquire the semaphore before entering the critical 
// section and release it afterward, ensuring that no more than 3 threads are working at the same time. The condition 
// variable is used to manage the synchronization of threads waiting to acquire the semaphore.