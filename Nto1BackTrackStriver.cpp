#include <iostream>

int print(int i,int n){
    if(i>n) return 0;
    print(i+1,n);
    std::cout<<i;
    return 0;
}
 int main(){
    int n;
    std::cin>>n;
    print(1,n);
    return 0;
 }

