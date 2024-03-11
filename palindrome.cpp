// Check whether a given number ’n’ is a palindrome number.

// Note :
// Palindrome numbers are the numbers that don't change when reversed.
// You don’t need to print anything. Just implement the given function.



bool palindrome(int n)
{
   int origNum=n;
   int revNum=0;
   while (n > 0) {
     int lastDig = n % 10;
     revNum = revNum * 10 + lastDig;
     n /= 10;
   }
  return revNum==origNum;
}

//in note,it is mentioned to not print anything(as online compiler has all included)
//if asked to print,use int main

int main(){
    int num;
    std::cout<<"enter a number";
    std::cin>>num;
    if(return) std::cout<<"true";
    else std::cout<<"false";
}