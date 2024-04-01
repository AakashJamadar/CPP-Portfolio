#include <iostream>

bool checkPalindrome(int i, std::string &s){
    if(i>=s.size()/2) return true;
    if(s[i]!=s[s.size()-i-1]) return false;
    return checkPalindrome(i+1,s);
}

int main(){
    std::string s;
    std::cin>>s;
    std::cout<<checkPalindrome(0,s);
    return 0;
}