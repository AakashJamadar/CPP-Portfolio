#include <iostream>

int main(){
    //Memory address=a location in memory where data is stored
    //memory address can be accessed with & (address of a operator)
    std::string name="bob";
    int age =45;
    char test='g';
    bool see=true;
    std::string nun="gta";

    std::cout<<&nun<<'\n';  //to know the memory address of these and then convert the hex code to decimal to know the amount of memory allocated to these
    std::cout<<&name<<'\n';
    std::cout<<&age<<'\n';
    std::cout<<static_cast<void*>(&test)<<'\n';  
    std::cout<<&see<<'\n';
    return 0;
}