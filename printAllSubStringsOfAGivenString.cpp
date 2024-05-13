#include <iostream>

int main(){
    int count=0;
    std::string str="aakash";
    int n=str.size();
    for(int i=0;i<n;i++){
        for(int len=i+1;len<=n;len++){     //here,we can write the loop of len from 1 to n-i and change substring to sustr(i,len) for same results
            std::cout<<str.substr(i,len-i)<<'\n';
            count++;
        }
    }
    std::cout<<count;
    return 0;
}

//Conclusion:formula to know the number of substrings possibke for a string=n*(n+1)/2;    where n is string length.