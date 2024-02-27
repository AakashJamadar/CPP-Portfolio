#include <iostream>

void print11(int n){
    for(int i=1; i<=n; i++){
        int start=1;
        if(i%2==0) start=0;           
        for(int j=1; j<=i; j++){
            std::cout<<start<<" ";
            start=1-start;
        }
        std::cout<<std::endl;
    }
} 
void print12(int n){
    for(int i=1; i<=n; i++){
        //numbers      
        for(int j=1; j<=i; j++){
            std::cout<<j;
        }
        //spaces
        for(int j=1; j<=2*(n-i); j++){
            std::cout<<" ";
        }
        //numbers
        for(int j=i; j>=1; j--){
            std::cout<<j;
            
        }
        std::cout<<std::endl;

    }
}
void print13(int n){
    int num=1;
    for(int i=0; i<n; i++){
        for(int j=0; j<=i; j++){
            std::cout<<num<<" ";
            num=num+1;
        }
        std::cout<<std::endl;
    }
}
void print14(int n){
    for(int i=0; i<n; i++){
        for(char ch='A'; ch<='A'+i; ch++){
            std::cout<<ch<<" ";
        }
        std::cout<<std::endl;
}
    }
void print15(int n){
     for(int i=0; i<n; i++){
        for(char ch='A';ch<='A'+(n-i-1); ch++){
            std::cout<<ch<<" ";
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
        print15(n);
    }
    return 0;
}