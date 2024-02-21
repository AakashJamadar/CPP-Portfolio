#include <iostream>
//pass by value
void doSomething(int num){
    std::cout<<num<<std::endl;
    num+=5;
    std::cout<<num<<std::endl;
    num+=5;
    std::cout<<num<<std::endl;
}    
int main(){
    int num=10;
    doSomething(num);
    std::cout<<num<<std::endl;
    return 0;
}