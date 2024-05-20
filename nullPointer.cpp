#include <iostream>

int main(){
    //null value=a speacial value that means something has no value
    //when a pointer is holding a null value,
    //that pointer is not pointing at anything(null pointer)

    //nullptr=keyword that represents a null pointer literal

    //null pointers are helpful when determining if an address
    //was successfully pointed to a pointer

    //why null pointer?
    //ans:If we create a pointer and don't assign it a value we don't know where the pointer is pointing to,
    //It will be good practice that the pointer doesn't point anywhere.

    //The dereference operator, also known as the indirection operator, 
    //is a symbol that gives access to the value at a memory address pointed to 
    //by a pointer in programming languages. It is usually represented by an asterisk (*) symbol.

    //Dereferencing is the process of accessing the value of a variable at a specific memory location.
    // It allows you to work with the actual data rather than just the memory location. 

    //Dereferencing a null pointer leads to an undefined behaviour
    //Dereferencing a pointer that is not assigned a value,that can lead to undefined behaviour too

    //that is why we check if it is assigned a value by if else statement instead of dereferencing it

    int* pointer=nullptr;
    int age =45;

    //pointer=&age;

    //If our pointer is still a null pointer,it's not safe to dereference that pointer
    //if i want access to the value that is at that pointer ,we can do it in the else statement(as it won't be a nullptr if else is executed)
    if(pointer==nullptr){
        std::cout<<"Address was not assigned!\n";
        std::cout<<pointer;  //dereferencing the null ptr by commenting(line 32) the value assigned to the pointer (it just ouput 0 here)
    }else{
        std::cout<<"Address was assigned\n";
        //std::cout<<*pointer;
    }

    //other ways to create a null pointer
    int* pointer=NULL;
    int* pointer=0;


    int* pointer;  //not a null pointer
    //i,e uninitialised variable is not a null pointer
    //pointer can be any datatype
    return 0;
}