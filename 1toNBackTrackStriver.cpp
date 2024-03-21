#include <iostream>

int print(int i,int n){
    if(i<1) return 0;
    print(i-1,n);
    std::cout<<i;
    return 0;
}

int main(){
    int n;
    std::cin>>n;
    print(n,n);
    return 0;
}

// Method-2(Single argument)

int print(int n){
    if(n<1) return 0;
    print(n-1);
    std::cout<<n;
    return 1;
}

int main(){
    int n;
    std::cin>>n;
    print(n);
    return 0;
}