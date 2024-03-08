#include <iostream>
#include <algorithm> 

bool comp(std::pair<int,int> p1, std::pair<int,int> p2){
    if(p1.second<p2.second)  return true;
    if(p1.second>p2.second) return false;
    //if above conditions don't run,they must be same
    if(p1.first>p2.first) return true;
    return false;
}

void explainExtra(){
    std::sort(a,a+n);  //to sort an array
    std::sort(v.begin(),v.end());  //to sort a vector
    std::sort(a+2,a+4);  //to sort specific portion
    std::sort(a,a+n,std::greater<int>);  // std::greater is an inbuilt comperator which automatically sorts in descending order
    std::pair<int,int> a[]={{1,2},{2,1},{4,1}}
    //sort it according to second element
    //if second element is same,then sort
    //it according to first element in descending 
    std::sort(a,a+n,comp);  //comp is a self written comperator,,this comperator is a boolean function
    //{4,1}, {2,1}, {1,2}

    int num=7;
    int cnt=__builtin_popcount(num);  //counts number of set bits of an unsigned integer

    long long num1=165786578687;
    int cnt1=__biltin_popcountll(num1);  //for long long

    std::string s="123";
    std:;sort(s.begin(),s.end());
    do{
        std::cout<<s<<std::endl;
    }while(next_permutation(s.begin(),s.end())); //generates the next lexicographically(132,213,231,312,321 respectively) greater permutation of a sequence. 
    //while loop working:cout<<s prints the first string,next_perm gives the  next permutation and string becomes that permutation now it gets printed as cout<<s,,this happens untill last permutation
    //if string was s=231,,,it would print 231,312,321.(so start from sort to print all the permutations)

    int maxi=*std::max_element(a, a+n);  //gives iterator,* to return the element,,,,similarly min element

}

int main(){
    explainExtra()
    return 0;
}