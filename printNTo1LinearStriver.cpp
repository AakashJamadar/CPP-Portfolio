#include <iostream>

int print(int i,int n){
    if(i<1) return 0;
    std::cout<<i;
    return print(i-1,n);
}

int main(){
    int n;
    std::cin>>n;
    print(n,n);
    return 0;
}

//Method-2 (single argument)

int print(int n){
    if(n<1) return 0;
    std::cout<<n;
    return print(n-1);
}

int main(){
    int n;
    std::cin>>n;
    print(n);
    return 0;
}