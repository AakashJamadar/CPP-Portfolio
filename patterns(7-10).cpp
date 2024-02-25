#include <iostream>

void print7(int n){
    for(int i=1; i<=n; i++){
        //spaces
        for(int j=1; j<=(n-i); j++){
            std::cout<<" ";
        }
        //stars
        for(int j=1; j<=(2*i-1); j++){
            std::cout<<"*";
        }
        //spaces
        for(int j=1; j<=(n-i); j++){
            std::cout<<" ";
        }
        std::cout<<std::endl;
    }
}
void print8(int n){
    for(int i=1; i<=n; i++){
        //spaces
        for(int j=1; j<=i-1; j++){
            std::cout<<" ";
        }
        //stars
        for(int j=1; j<=(2*(n-i)+1); j++){
            std::cout<<"*";
        }
        //spaces
        for(int j=1; j<=i-1; j++){
            std::cout<<" ";
        }
        std::cout<<std::endl;
    }
}
void print9(int n){
    for(int i=1; i<=n; i++){
        //spaces
        for(int j=1; j<=(n-i); j++){
            std::cout<<" ";
        }
        //stars
        for(int j=1; j<=(2*i-1); j++){
            std::cout<<"*";
        }
        //spaces
        for(int j=1; j<=(n-i); j++){
            std::cout<<" ";
        }      
        std::cout<<std::endl;
    }
    for(int i=1; i<=n; i++){
        //spaces
        for(int j=1; j<=i-1; j++){
            std::cout<<" ";
        }
        //stars
        for(int j=1; j<=(2*(n-i)+1); j++){
            std::cout<<"*";
        }
        //spaces
        for(int j=1; j<=i-1; j++){
            std::cout<<" ";
        }
        std::cout<<std::endl;
    }
}
void print10(int n){
    for(int i=1; i<=2*n-1; i++){
        int stars=i;
        if(i>n)stars=2*n-i;
        for(int j=1; j<=stars; j++){
            std::cout<<"*";
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
        print11(n);
    }
    return 0;
}