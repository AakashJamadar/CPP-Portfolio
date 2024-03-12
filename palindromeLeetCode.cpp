// Given an integer x, return true if x is a palindrome,and false otherwise




class Solution {
public:
    bool isPalindrome(int x) {
  int origNum=x;
    if (x<0) return false;  //negative numbers are not palindrome
    long revNum=0;
    while (x > 0) {
     revNum = revNum * 10 + x % 10 ;
     x /= 10;
    }
     return revNum==origNum;  //with this runtime gets 0ms,,,,,if else takes more runtime
     
}
   
};