#include <iostream>

class Human{     //Remember to use the semicolon(;) at the end of the class
    public:
        std::string name;   //If you initialize here,it will become a default value for the Human.
        int age;
        std::string occupation;

        void eat(){
            std::cout<<"Eating\n";
        }
        void drink(){
            std::cout<<"Drinking\n";
        }
        void sleep(){
            std::cout<<"Sleeping\n";
        }
};

class Car{
    public:
        std::string make;
        std::string model;
        int year;
        std::string colour;

        void accelerate(){
            std::cout<<"Vroooom Vrooooom\n";
        }
        void brake(){
            std::cout<<"Screech\n";
        }
};

int main(){
    //Object=A collection of attributes and methods
    //Attributes are characteristics of an object and
    //Methods are functions that an object can perform
    //They(objects) can have characteristics and could perform actions
    //Object can be used to mimic real world items(ex.phone,book,dog)
    //Created from a class which acts a "blue-print"

    Human human1;
    Human human2;

    human1.name="Rick";
    human1.age=70;
    human1.occupation="Scientist";

    human2.name="Morty";
    human2.age=15;
    human2.occupation="Student";

    std::cout<<human2.name<<'\n';
    std::cout<<human2.age<<'\n';
    std::cout<<human2.occupation<<'\n';

    human2.eat();
    human2.drink();
    human2.sleep();


    Car car1;      //Here,car is a class and car1 is an object

    car1.make="Ford";
    car1.model="Mustang";
    car1.year=1964;
    car1.colour="Silver";

    std::cout<<car1.make<<'\n';
    std::cout<<car1.model<<'\n';
    std::cout<<car1.year<<'\n';
    std::cout<<car1.colour<<'\n';

    car1.accelerate();
    car1.brake();

    return 0;
}