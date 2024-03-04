#include <iostream>
#include <stack>

//LIFO:Last in First out

void explainStack(){
    std::stack <int> s;
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(3);
    s.emplace(4);
    std::cout<<s.top()<<" ";
    s.pop();
    std::cout<<s.top()<<" ";
    std::cout<<s.size()<<" ";
    std::cout<<s.empty()<<" ";
    std::stack<int>s1, s2;
    s1.swap(s2);
    while(!s.empty()){
        std::cout<<s.top()<<" ";
        s.pop();
    }
}

int main(){
    explainStack();
    return 0;
}