class Solution {
public:
    int i=0;
    bool isPalindrome(string s) {
          std::string clean_s;
    for(char c : s) {
        if(std::isalnum(c))
            clean_s += std::tolower(c);
    }
    if(i>=clean_s.size()/2) return true;
    if(clean_s[i]!=clean_s[clean_s.size()-i-1]) return false;
     i++;
    return isPalindrome(clean_s);
}
};