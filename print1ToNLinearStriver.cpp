#include <iostream>

int print(int i,int n){  //can use void function too
    if(i>n) return 1;  //if void function is used,just write return here.
    std::cout<<i;
    return print(i+1,n);  //when you return call function and want the return value in output,cout the first called function(i,e int main)                                                
}

int main(){
    int n;
    std::cin>>n;
    int k=print(1,n); 
    std::cout<<k;
   return 0;
}

//Method-2 (single argument)

int print(int n){
    if(n<1) return 2;
    print(n-1);
    std::cout<<n;
    return 0; //if int function has no return value and you call the function and cout the called function,you will get garbage value.  
}

int main(){
    int n;std::cin>>n;
    int k=print(n);
    std::cout<<k;
    return 0;
}