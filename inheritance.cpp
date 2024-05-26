#include <iostream>

class Animal{           //parent class
    public:
        bool alive=true;

    void eat(){
        std::cout<<"This Animal is eating\n";
    }
};

class Dog : public Animal{      //child class
    public:
        std::string color="Brown";

    void bark(){
        std::cout<<"Bow-wow\n";
    }
};

class Cat : public Animal{      //child class
    public:
        std::string color="White";

    void meow(){
        std::cout<<"Meow-moew\n";
    }
};

int main(){
    //inheritance = A class can receive attributes and methods from another class
    //Children classes inherit form a parent class
    //Helps to reuse similar code found within multiple classes

    Dog dog;
    Cat cat;

    std::cout<<cat.alive<<'\n';
    std::cout<<cat.color<<'\n';
    cat.eat();
    //dog.bark();
    cat.meow();

    return 0;
}