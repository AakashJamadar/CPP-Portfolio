#include <iostream>

//There exists a default destructor for evey class just like constructor and copy constructor

//Used for deallocating the memory

//When object goes out of scope,the destructor hets called automatically
//Ex: when the code reaches the last line of int main,destructor gets called automatically freeing the memory that was allocated for the object

// Key Points about Destructors:

//  1.   No Parameters: Destructors do not take any arguments.
//  2.   No Return Type: Destructors do not return a value.
//  3.   Single Destructor: A class can have only one destructor.
//  4.   Automatic Call: Destructors are called automatically when an object goes out of scope or is explicitly deleted.

class Hero{
    public:
        int health;
        int level;

        Hero(){
            
            std::cout<<"Simple constructor called\n";
        }
        ~Hero(){
            std::cout<<"Destructor called\n";
        }
};

int main(){
    //Static allocation
    Hero a;

    //Dynamic allocation
    Hero *h1=new Hero;
    //manual destructor call
    delete h1;          //After this destructor gets called (we had a cout to know the destructor call)

    //Above constructor was called twice but the destructor was called only once,this is because destructor doesn't get called for dynamically 
    //created object,manual deallocation must be done
    //Only objects created statically call the destructor when they go out of scope.
    //so,you have to use delete keyword to delete the memory allocated dynamically thereby calling the destructor
    return 0;
}

//Just like constructor gets called only once during the object creation,destructor also gets called only once during the object's memory deletion

//When you add a destructor explicitly,the default one goes out of scope