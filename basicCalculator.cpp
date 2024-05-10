#include <iostream>

int main(){
    char op;
    float num1;
    float num2;
    double result;

    std::cout<<"*********CALCULATOR*********\n";
    std::cout<<"Enter a operator in (+,-,/,*)";
    std::cin>>op;
    std::cout<<"Enter a number ";
    std::cin>>num1;
    std::cout<<"Enter another number ";
    std::cin>>num2;

    switch(op){
        case '+':
          result=num1+num2;
          std::cout<<"result:"<<result<<'\n';
          break;
        case '-':
          result=num1-num2;
          std::cout<<"result:"<<result<<'\n';
          break;
        case '*':
          result=num1*num2;
          std::cout<<"result:"<<result<<'\n';
          break;
        case '/':
          result=num1/num2;
          std::cout<<"result:"<<result<<'\n';
          break;
        default:
        std::cout<<"That wasn't a valid operator.\n";
    }
    std::cout<<"****************************";

    return 0;
}
