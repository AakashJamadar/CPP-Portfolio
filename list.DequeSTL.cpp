#include <iostream>
#include <list>
#include <deque>

//list

void explainList(){     
    std::list<int> l;
    l.push_back(2);
    l.emplace_back(5);
    l.push_front(8);
    l.emplace_front(4);
    for(int num:l){
        std::cout<<num<<" "<<std::endl;
    }
    std::cout<<l.front()<<" ";
    std::cout<<l.back()<< " ";

    //rest functions are same as vector
    //begin, end, rbegin, rend,clear, insert, size, swap
}

void explainDeque(){
    std::deque<int> dq;
    dq.push_back(1);
    dq.emplace_back(2);
    dq.push_front(3);
    dq.emplace_front(4);
    dq.pop_back();
    dq.pop_front();
    std::cout<<dq.front()<<" "<<dq.back();

    //rest functions same as vector
    //begin,end,rbegin,rend,clear,insert,size,swap
}

int main(){
    explainList();
    explainDeque();
    return 0;
}