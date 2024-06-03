//You are given 2 integers l and r.You have to count the number of super palindrome numbers in the range[l,r](both inclusive)

//A number is caled a super palindrome number if it is a palindrome number in its decimal rpresentation as well as a perfect square.

#include <iostream>
#include <cmath>

//Brute force

class Solution {
  public:
  
    bool isPalindrome(int x){
        int origNum=x;
        if(x<0){
            return false;
        }
        int revNum=0;
        while(x>0){
            revNum=revNum*10+x%10;
            x/=10;
        }
        return revNum==origNum;
    }
    
    bool isPerfectSquare(int x){
        int root=sqrt(x);
        return root*root==x;
    }
  
    int countSuperPalindrome(int l, int r) {
        // code here
        int count=0;
        for(int i=l; i<=r; i++){
                if(isPerfectSquare(i) && isPalindrome(i)){
                    count++;
                }
        }
        return count;
    }
};

//Optimal solution

class Solution {
  public:
  
 
    int countSuperPalindrome(int l, int r) {
        // code here
        int count=0;
        int start=static_cast<int>(ceil(sqrt(l)));
        while(start*start<=r){
            int square=start*start;
            string str=to_string(square);
            if(str==string(str.rbegin(),str.rend())){
                    count++;
            }
            start++;
        }
        return count;
    }
};

int main(){
    int l;
    int r;
    std::cin>>l>>r;
    Solution sol;
    std::cout<<sol.countSuperPalindrome(l,r);
    return 0;
}