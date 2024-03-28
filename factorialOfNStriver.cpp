#include <iostream>

int product(int i,int multiply){
    if(i<2) {
       std::cout<<multiply;
       return 1; 
    }
    return product(i-1,multiply*i);
}

int main(){
    int n;
    std::cin>>n;
    product(n,1);
    return 0;
}

//Method-2(Single agument)

int factorial(int n){
    if(n<2) return 1;
    return n*factorial(n-1);
}

int main(){
    int n;
    std::cin>>n;
    std::cout<<factorial(n);
    return 0;
}
