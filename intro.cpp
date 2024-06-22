#include <iostream>

// Good practice is to start the name of the class with capital letter.

//OOP stands for Object-Oriented Programming, a programming language model that focuses on data and objects instead of functions and logic.
//It's a common concept in programming and is used to structure software programs into reusable code blueprints, called classes, 
//that can be used to create objects.

//                      Class
//A class is a blueprint for creating objects, or instances, of a particular type. Classes define the structure and behavior of objects, 
//including their methods, variables, attributes, and initial state:
//Nothing but a user defined datatype


//                      Object
//An instance of the class that encapsulates both data and behaviour

//                      Object has
// 1.Data/Data members/Attributes/State/Properties
// 2.Methods/Functions/Behaviour

class Hero{
    public:   //If public is not mentioned here,default will be private
    //Properties
        int health;
        char level;

    //Behaviour
    void attack(){
        std::cout<<"Attack!\n";
    }

};

int main(){
    Hero giant;   //creation of object
    std::cout<<giant.health<<'\n';
    giant.attack();
    return 0;
}