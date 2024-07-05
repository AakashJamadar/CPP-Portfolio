#include <iostream>

//Notes for inheritance is in the inheritanceAccessModifiers.cpp file

//Sub class-The class that inherits propeties from other class is called sub class or child class or derived class
//Super class-TThe class whose properties are inherited by the sub class is called the super class or parent class or base class

class Human{
    public:
        int age;
        int height;
        int weight;

    public:
        void setWeight(int w){
            this->weight=w;
        }
        int getHeight(){
            return height;
        }
};

//child class
class Male:public Human{
    public:
        std::string color;

        void sleep(){
            std::cout<<"Male is sleeping\n";
        }
        void setHeight(){
            this->height++;
        }
};

class Student:public Male{
    public:
        int grade;

        void study(){
            std::cout<<"studying\n";
        }
        void setAge(){
            this->age++;
        }
};

int main(){
    Male h;
    Student s;

    //To check the inheritance properties of access modifiers
    std::cout<<h.age<<std::endl;
    std::cout<<s.age<<std::endl;

    // std::cout<<h.height<<std::endl;
    // std::cout<<h.age<<std::endl;
    // std::cout<<h.weight<<std::endl;
    // std::cout<<h.color<<'\n';
    // h.setWeight(70);
    // std::cout<<h.weight<<'\n';
    // h.sleep();


    return 0;
}