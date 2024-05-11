#include <iostream> 

int main(){
    //ternary operator ?: = replacement to if else statement.
    //condition ? expression 1 : expression 2; (expression 1 is executed if condition is true and expression 2 if condition is false)

    //int marks=89;
    //marks>=60 ? std::cout<<"you pass." : std::cout<<"you fail";

    //int number=67;
    //number % 2==0 ? std::cout<<"even" :std::cout<<"odd";
    //number % 2 ? std::cout<<"odd" : std::cout<<"even";  //another way to write this as 0 corresponds to false and 1 corresponds to true.

    //bool hungry=true;
    //hungry ? std::cout<< "you are hungry" : std::cout<< "you are full";
    //std::cout<< (hungry ? "you are hungry" : "you are full")<<std::endl; //other way to write it

    // int num,test=40;
    // num=test<10? 10 : test+10;
    // std::cout<<num-test;

    int A=40, B=20, C=10;
    int maxNum= (B > C) ? ((B > A) ? B : A) : ((C > A) ? C : A);
    std::cout<<"Maximum number is "<<maxNum;
    return 0;
}
