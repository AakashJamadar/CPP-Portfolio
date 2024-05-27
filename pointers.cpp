#include <iostream>

int main(){
    //pointer=variable that stores a memory address of another variable.
    //sometimes it is easier to work with an address

    //&= address of operator
    //*= dereference operator
    // std::string name="jio";
    // std::string* pName=&name;
    // std::cout<<name<<'\n';
    // std::cout<<&name<<'\n';
    // std::cout<<pName<<'\n';
    // std::cout<<*pName<<'\n';

    //The dereference operator, also known as the indirection operator, 
    //is a symbol that gives access to the value at a memory address pointed to 
    //by a pointer in programming languages. It is usually represented by an asterisk (*) symbol.

    // int age=45;
    // int * pAge= &age;
    // std::cout<<*pAge<<'\n';

    std::string freePizzas [5]={"pizza1","pizza2","pizza3","pizza4","pizza5"};
    std::string* pFreePizzas=freePizzas;
    // std::cout<<(&freePizzas)<<'\n';  //prints the memory address of the entire array.
    // //array name already prints the address, so no need to add '&' again,
    // std::cout<<pFreePizzas<<'\n';  //prints the memory address of the first element of the array. ( because, & is not used)
    // //They are printing the same memory addresses,so let's use static_cast
    // std::cout<<static_cast<void*>(&freePizzas)<<'\n';
    // std::cout<<static_cast<void*>(pFreePizzas)<<'\n';  //it also printed the same memory address

    std::cout<<&freePizzas<<'\n';   
    std::cout<<&pFreePizzas<<'\n';  //prints the address in memory where the pointer variable pFreePizzas is stored.
    std::cout<<*(&freePizzas)<<'\n'; //outputs the memory addresss as it points to the memory address of the entire array and it can't print the entire array
    std::cout<<*pFreePizzas<<'\n';   //prints the first element of the array as it points to first element's memory address
    return 0;
}