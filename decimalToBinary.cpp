#include <iostream>
#include <math.h>

// Division-Method

int decimalToBinary1(int n){
    int binaryNum = 0;
    int i = 0;
    while(n>0){
        int bit = n % 2;
        binaryNum = bit*pow(10,i++)+binaryNum;  //using pow is unnecessay,just use i by incrementing i*=10
        n/=2;
    }
    return binaryNum;
}

// Bitwise-Method

int decimalToBinary2(int n){
    int i = 0;
    int binaryNum = 0;
    while(n>0){
        int bit = n&1;
        binaryNum+=bit*pow(10,i++);  //using pow is unnecessay,just use i by incrementing i*=10
        n>>=1;
    }
    return binaryNum;
}

int main(){
    int n;
    std::cin>>n; 
    std::cout<<decimalToBinary2(n);
    return 0;
}