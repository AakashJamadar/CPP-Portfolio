#include <iostream>
#include <queue>
#include <vector>

//Queue
void explainQueue(){
    std::queue<int> q;
    q.push(1);
    q.push(2);
    q.push(4);
    q.emplace(3);
    q.back()+=5;
    std::cout<<q.back()<<" "; 
    std::cout<<q.front()<<" ";
    q.pop();
    while(!q.empty()){
        std::cout<<q.front()<<" ";
        q.pop();
    }
}

//size swap empty same as stack

//Priority Queue
//Max Heap
void explainPQ(){
    std::priority_queue<int> pq;
    pq.push(5);
    pq.push(2);
    pq.push(8);
    pq.emplace(25);
    pq.emplace(10);
    std::cout<<pq.top()<<" ";
    pq.pop();
    std::cout<<pq.top()<<" ";
}

//size swap empty function same as others

//Minimum Heap
void minPQ(){
    std::priority_queue<int, std::vector<int>, std::greater<int>> pqq;
    pqq.push(5);
    pqq.push(2);
    pqq.push(8);
    pqq.emplace(10);
    while(!pqq.empty()){
        std::cout<<pqq.top()<<" ";
        pqq.pop();
    }
}


int main(){
    explainPQ();
    explainQueue();
    minPQ();
    return 0;
}