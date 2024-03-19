#include <iostream>

void print(){
    std::cout<<1<<std::endl;
    print();
}

int main(){
    print();
    return 0;
}

//This leads to Stack overflow.
//A programming error that occurs when a computer program tries to use more memory space than is available in the call stack.

int count=0;
void print(){
    if(count==3) return;
    std::cout<<count<<std::endl;
    count ++;
    print();
}

int main(){
    print();
    return 0;
}

//Base Case/Base condition is a condition in Recursive function that prevents a function from calling itself indefinitely.
//RECURSION & RECURSION TREE too