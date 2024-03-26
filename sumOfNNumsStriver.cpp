#include <iostream>

int sum(int i,int add){
    if(i<1) {
        std::cout<<add;
        return 0;
    }
    return sum(i-1,add+i);
}

int main(){
    int n;
    std::cin>>n;
    sum(n,0);
    return 0;
}

//Method-2(Single argument)

int sum(int n){
    if(n<1) return 0;
    return n+sum(n-1);
}

int main(){
    int n;
    std::cin>>n;
    std::cout<<sum(n);
    return 0;
}