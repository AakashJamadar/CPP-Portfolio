#include <iostream>

void print20(int n){
    for(int i=1; i<=2*n-1; i++){
        //stars
        int stars=i;
        if(i>n) stars=2*n-i;
        for(int j=0; j<stars; j++){
            std::cout<<"*";
        }
        //spaces
        int spaces=2*(n-i);
        if(i>n) spaces=2*(i-n); 
        for(int j=0; j<spaces; j++){
            std::cout<<" ";
        }
        //stars
        for(int j=0; j<stars; j++){
            std::cout<<"*";
        }
        std::cout<<std::endl;
    }
}
void print21(int n){
    for(int i=1; i<=n; i++){
        for(int j=1; j<=n; j++){
            if(i==1 || j==1 || i==n || j==n ){
                std::cout<<"*";
            }else{
                std::cout<<" ";
            }
        }
        std::cout<<std::endl;
    }
}
void print22(int n){
    for(int i=1; i<=2*n-1; i++){
        for(int j=1; j<=2*n-1; j++){
            int top=i-1;
            int left=j-1;
            int bottom=2*n-1-i;
            int right=2*n-1-j;
            std::cout<<(n-std::min(std::min(top,bottom),std::min(left,right)));
        }
        std::cout<<std::endl;
    }
}
int main(){
    int t;
    std::cin>>t;
    for(int i=1; i<=t; i++){
        int n;
        std::cin>>n;
        print22(n);
    }
    return 0;
}