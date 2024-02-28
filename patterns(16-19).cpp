#include <iostream>

void print16(int n){
    
    for(int i=0; i<n; i++){
        char ch='A'+i;
        for(int j=0; j<=i; j++){
            std::cout<<ch<<" ";
        }
        std::cout<<std::endl;
    }
}
void print17(int n){
    for(int i=0; i<n;i++){
        char ch='A';
        //spaces
        for(int j=0; j<=n-i-1; j++){
            std::cout<<" ";
        }
        //alphabets
        int breakpoint=(2*i+1)/2;
        for(int j=1;j<=2*i+1; j++){
            std::cout<<ch;
            if(j<=breakpoint){
                ch++;
            }else{
                ch--;
            }
        }
        //spaces
        for(int j=0; j<=n-i-1; j++){
            std::cout<<" ";
        }
        std::cout<<std::endl;
    }
}
void print18(int n){
    for(int i=0; i<n; i++){
        for(char ch=('A'+n-1)-i; ch<=('A'+n-1); ch++){
            std::cout<<ch<<" ";
        }
        std::cout<<std::endl;
    }
}
void print19(int n){
    for(int i=0; i<n; i++){      
        //stars
        for(int j=0; j<n-i; j++){
        std::cout<<"*";
        }      
        //spaces
        for(int j=0; j<2*i; j++){
            std::cout<<" ";
        }
        //stars
        for(int j=0; j<n-i; j++){
        std::cout<<"*";
        }  
        std::cout<<std::endl;
    }    
    for(int i=0; i<n; i++){
        //stars
        for(int j=0; j<=i; j++){
            std::cout<<"*";
        }
        //spaces
        for(int j=0;j<2*(n-i-1); j++){
            std::cout<<" ";
        }
         //stars
        for(int j=0; j<=i; j++){
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
        print19(n);
    }
    return 0;
}