// Write a function int max_of_four(int a, int b, int c, int d) which returns the maximum of the four arguments it receives.


// Input Format

// Input will contain four integers a,b,c,d one per line.

// Output Format

// Return the greatest of the four integers.
// PS: I/O will be automatically handled.

#include <iostream>
#include <cstdio>
using namespace std;

/*
Add `int max_of_four(int a, int b, int c, int d)` here.
*/

int maxx(int a,int b,int c,int d){
    if(b>a){
        if(c>b){
            if(d>c){
                return d;
            }else{
                return c;
            }
        }else{
            if(d>b){
                return d;
            }else {
                return b;
            }
        }
    }else{
        if(c>a){
            if(d>c){
                return d;
            }else {
                return c;
            }
        }else {
            if(d>a){
                return d;
            }else {
                return a;
            }
        }
    }
}

int maxx(int a,int b,int c,int d){
    if(a>b && a>c && a>d){
        return a;
    }else if(b>c && b>d){
        return b;
    }else if(c>d){
        return c;
    }else {
        return d;
    }
}

int main() {
    int a;
    int b;
    int c;
    int d;
    cin>>a>>b>>c>>d;
    std::cout<<maxx(a,b,c,d);
    return 0;
}