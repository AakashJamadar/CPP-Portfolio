#include <iostream>

void print1(int n){
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            std::cout<<"* ";
        }
        std::cout<<std::endl;
    }
}
void print2(int n){
    for(int i=1; i<=n; i++){
        for(int j=0; j<i; j++){
            std::cout<<"* ";
        }
        std::cout<<std::endl;
    }
}
void print3(int n){
   for(int i=1; i<=n; i++){
     for(int j=1; j<=i; j++){
        std::cout<<j<<" ";
     }
     std::cout<<std::endl;
   }
}
void print4(int n){
    for(int i=1; i<=n; i++){
        for(int j=1; j<=i; j++){
            std::cout<<i<<" ";
        }
        std::cout<<std::endl;
    }
}
void print5(int n){
    for(int i=0; i<n; i++){
        for(int j=0; j<(n-i); j++){
            std::cout<<"* ";
        }
        std::cout<<std::endl;
    }
}
void print6(int n){
    for(int i=1; i<=n; i++){
        for(int j=1; j<=(n-i+1); j++){
            std::cout<<j<<" ";
        }
        std::cout<<std::endl;
    }
}

int main(){
    int t;
    std::cin>>t;
    for(int i=0; i<t; i++){
        int n;
        std::cin>>n;
        print6(n);
    }
   
    return 0;
}