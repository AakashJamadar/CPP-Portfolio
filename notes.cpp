//Access modifiers are public,private adn protected
//Public:can be accessed anywhere inside and outside of the class
//Protected:can only be acceessed inside the class and it's child class
//Private:can only be acceessed inside the class and not even in the child class

//If the members of a class are private we can use setters and getters to change or get values,but the getters and setters must be under
//public access modifier

#include <iostream> 

//Public access modifier

class Hero{   //keeping the first letter of the class name capitalized is good practice.

    public: 
        int health;

};

//private access modifier

class Dragon{
    private:
        int hitPoints=4000;

    public:
        void setValue(int value){           //Since the member is private we use getters and setters(they must be public)
            hitPoints=value;
        }       //setters can also be used to add conditions using if else,take one more argument and set if(argument=='owner'){health=h}
        int getValue(){
            return hitPoints;
        }
};

//Protected access modifier

class Table{
    protected:
        int legs=4;

};

class SmallTable : public Table{  //The access modifier we add here decides how the members of the class can be accesed by other classes or functions
    public:                       //If we add private in the syntax and add public inside the derived class,the new members are public
        int totalLegs(){
            return legs;        //memebrs are accessible directly without needing to use . , -> or :: in derived class
        }
        
};


int main(){
    Hero h1;
    std::cout<<h1.health<<'\n';

    Dragon drag;
    drag.setValue(4500);
    std::cout<<drag.getValue()<<std::endl;  //member is inaccessible because of the private access modifier

    Table wooden;
    //std::cout<<wooden.legs;     //Protected memebrs are inaccessible too

    SmallTable squared;
    //std::cout<<squared.legs;   //this is inaccessible too as the protected memebrs can only be accessed inside the derived/child class
    std::cout<<squared.totalLegs();
    return 0;
}

//This comes in inheritance

//                      Product of access modifiers
//If the Parent class was public and the child class had ______ access modifier/specifier in its syntax
// 1.public -> derived memebrs will all be public
// 2.Protected -> derived members are protected
// 3.private -> derived memebres are private

//If the Parent class was protected and the child class had ______ access modifier/specifier in its syntax
// 1.public -> derived memebrs will all be protected
// 2.Protected -> derived members are protected
// 3.private -> derived memebres are private

//If the Parent class was private and the child class had ______ access modifier/specifier in its syntax
// 1.public -> derived memebrs will all be private
// 2.Protected -> derived members are private
// 3.private -> derived memebres are private

//If the parent class had different modifiers,use this note
//                  NOTE:
// Public crossed with anything is the anything
// protected crossed with private is private 
// Private crossed with anything is private
// same modifier crossed with the same remains same.