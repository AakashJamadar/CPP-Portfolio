// Determine if a given string ‘S’ is a palindrome using recursion. 
// Return a Boolean value of true if it is a palindrome and false if it is not.
// Note: You are not required to print anything, just implement the function. Example:

int i=0;
bool isPalindrome(string& str) {
    if(i>str.size()/2) return true;
    if(str[i]!=str[str.size()-i-1]) return false;
    i++;
    return isPalindrome(str);
}
