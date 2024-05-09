#include <iostream>

int main(){
    std::string name;
    int age;
    std::cout<<"your age?";
    std::cin>>age;
    std::cout<<"your full name?";
    std::getline(std::cin>>std::ws,name);
    std::cout<<"hello "<<name<<'\n';
    std::cout<<"you are "<<age<<" years old.";
    return 0;
}

//for character input(cin),once we use space it stops reading the string.The output is shown as follows
// PS D:\C++\C++ Projects> ./a.exe        
// your full name?jio jio jio 
// your age?hello jio
// you are 0 years old.
//SO WEUSE GETLINE FUNCTION
//i,e std::getline(std::cin,name);

//wHAT IF WE USE GETLINE FUNCTION AFTER CIN
//output will be as follows
// PS D:\C++\C++ Projects> ./a.exe        
// your age?78
// your full name?hello
// you are 78 years old.
//WHY DOES THIS HAPPEN
//when we press ENTER we send a newline character('\n') along with the data entered to the input buffer,this newline charcter('\n')
//remains in the input buffer and gets consumed by the getline function causing unexpected behaviour.
//So,to overcome this we use
//std::getline(std::cin>>std::ws,name)
//std::ws here eliminates any new line charcters or white spaces.