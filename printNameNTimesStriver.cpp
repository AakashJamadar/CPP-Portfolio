#include <iostream> 

int printName(int i,int n){
    if(i>n) return 1;
    std::cout<<"hey"<<std::endl;
    printName(i+1,n); //even if we don't write return here,it returns 1 when called function valuse is stored and used to obtain output.
}

int main(){
    int n;
    std::cin>>n;
    int k=printName(1,n);
    std::cout<<k;  //k used for testing.
    return 0;
}

//Time complexity=O(n)...as we call near about n functions
//Space complexity:O(n)...we generally consider stack space,so f(1,3),f(2,3),f(3,3) were waiting,,so O(n)

//Method-2 (single argument)

int print(int n){
    if(n<1) return 0;
    std::cout<<"hey";
    return print(n-1);
}

int main(){
    int n;
    std::cin>>n;
    print(n);
}