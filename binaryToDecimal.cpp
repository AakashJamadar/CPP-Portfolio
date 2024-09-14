#include <iostream>
#include <cmath>

int binaryToDecimal1(int n){
    int decimalNum = 0;
    int i = 0;
    while(n!=0){
        int digit = n%10;
        decimalNum+=digit*pow(2,i++);  //using pow is unnecessay,just use i by incrementing i*=2
        n/=10;
    }
    return decimalNum;
}


int main(){
    int n;
    std::cin>>n;
    std::cout<<binaryToDecimal1(n);
    return 0;
}