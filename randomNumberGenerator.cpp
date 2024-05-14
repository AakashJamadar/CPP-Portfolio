#include <iostream>
#include <ctime>

int main(){
    //pseudo-random(not truly random,but close)
    srand(time(NULL));  //time(NULL) returns the current time in secondssince the unix epoch,this is a constantly changing value,so it is a good choice for a seed value
    //int randNum=rand()%6+1; // %6 makes the  random values to 0 to 5 ,so +1.
    //std::cout<<randNum;
    int num1=rand()%6+1;
    int num2=rand()%6+1;
    int num3=rand()%6+1;
    std::cout<<num1<<'\n'<<num2<<'\n'<<num3<<'\n';
    return 0;
}