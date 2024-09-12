#include <iostream>
#include <string.h>


// int main(){
//     std::cout<<"Enter something\n";

//     // char arr[100];
//     // std::cin.getline(arr,100);
//     // std::cout<<arr;

//     std::string input;
//     std::getline(std::cin,input);
//     std::cout<<input;
//     return 0;
// }


int main(){
    // char ch;
    // std::cin.get(ch);
    // std::cout<<ch<<'\n';
    char arr[100];
    std::cin.get(arr,100); //reads upto 9 characters or newline
    std::cout<<arr;
    return 0;
}