#include <iostream>

//      Single Inheritance

// class Animal{
//     public:
//         int age;

//         void sound(){
//             std::cout<<"making sound\n";
//         }
// };

// class Dog:public Animal{
//     public:
//         std::string color;

//         void bark(){
//             std::cout<<"Dog barks\n";
//         }
// };

// int main(){
//     Dog d;
//     d.sound();
//     std::cout<<d.age<<'\n';
//     d.bark();

//     return 0;
// }


//Multi-level Inheritance

//when a class inherits from a derived class and the derived class becomes the base class of the new class,it is calles multi-level inheritance
//there is more than one level in multi level inheritance

// class Animal{
//     public:
//         int age=1;

//         virtual void sound(){
//             std::cout<<"Animal sound\n";
//         }
// };

// class Dog:public Animal{
//     public:
//         int age=2;
//         void sound(){
//             std::cout<<"Dog sound\n";
//         }
// };

// class GreyHound:public Dog{
//     public:
//         int age=3;
//         // void sound(){
//         //     std::cout<<"Greyhound sound\n";
//         // }
// };

//Method overriding:
//If the object was created upon the class C,sound is called from the respective class,if that class had no function it moves higher in the hierarchy
//same happens when virtual keyword is used in the parent function

//If the sound() function is defined in all three classes, the method in the most derived 
//class (the "lowest" in the inheritance hierarchy) will be called.

//                          Summary
//Without virtual: The lookup is performed at compile time based on the reference type, going up the hierarchy if necessary.
//With virtual: The lookup is performed at runtime based on the actual object's type, going up the hierarchy if necessary.

// int main(){
//     GreyHound g;
//     g.sound();
//     //std::cout<<g.age<<'\n';
//     //g.Animal::sound();
//     return 0;
// }

//Multiple inheritance

//when a subclass inherits from 2 or more superclasses

// class Animal{
//     public:
//         int height;

//         void sound(){
//             std::cout<<"Animal sound\n";
//         }
// };

// class Human{
//     public:
//         int age;
//         int weight;

//         void speak(){
//             std::cout<<"Human speaks\n";
//         }
// };

// class Hybrid:public Animal,public Human{

// };

//In multi-level inheritance, there is a single, linear inheritance path. Each derived class inherits from only one base class, and 
// this continues down the chain. As a result, there is no ambiguity because each member variable and method can be traced back through
//  a single, unambiguous path.

//In multiple inheritance, a derived class inherits from more than one base class. This can lead to ambiguity if the base classes 
//have members with the same name. The compiler cannot determine which base class member to use without explicit clarification.

//why ambiguity occurs in multiple inheritance and not in multi level

//                  chat gpt answer
//Animal is the base class with a weight member and a sound method.
// Mammal inherits from Animal and overrides the sound method.
// Human inherits from Mammal, introduces a new age member, and overrides the sound method again.

//                  Own words
//because in muti level inheritance override happens each time when a class inherits from its parent,whereas in multiple inheritance 
//both parents are treated equally

// int main(){
//     Hybrid obj;
//     std::cout<<obj.weight<<std::endl;       //code runs fine even with errors(fake errors),error went away after restarting vs code
//     obj.sound();
//     return 0;
// }

//Hierarchical inheritance

//when one class seves as a parent for more than one class

// class A{
//     public:

//         void func1(){
//             std::cout<<"Func1 called\n";
//         }
// };

// class B:public A{
//     public:

//         void func2(){
//             std::cout<<"Func2 called\n";
//         }
// };

// class C:public A{
//     public:

//         void func3(){
//             std::cout<<"Func3 called\n";
//         }
// };

// int main(){
//     A obj1;
//     obj1.func1();

//     B obj2;
//     obj2.func1();
//     obj2.func2();

//     C obj3;
//     obj3.func1();
//     //obj3.func2();     //this function doesn't belong to C or its parent
//     obj3.func3();
//     return 0;
// }

//Hybrid inheritance

//combinatin of more than one type of inheritance

//to from hybrid inheritace using single and multi level inheritance,the single inheritance we use must not be part of multi level inheritance
//btw a,b,c,d is understandable and fine

//Ex:B and C inherits from A, and C also inherits from D (hierarchical inheritance,multiple inheritance)


// class A{
//     public:

//         void funcA(){
//             std::cout<<"FuncA called\n";
//         }
// };

// class D{
//     public:

//         void funcD(){
//             std::cout<<"FuncD called\n";
//         }
// };

// class B:public A{
//     public:

//         void funcB(){
//             std::cout<<"FuncB called\n";
// }
// };

// class C:public A,public D{
//     public:
         
//          void funcC(){
//             std::cout<<"FuncC called\n";
//          }
// };

//another exanple witha almost same case

//Ex:B and C inherits from A ,,,,, and C,B inherits from D (or simply B,C inherits from both A and D)

// Inheritance Ambiguity
//typically occurs in multiple inheritance 

//Ambiguity is resolved by the scope resolution operator(::)

class A{
    public:
        void func(){
            std::cout<<"A called\n";
        }
};

class B{
    public:
        void func(){
            std::cout<<"B called\n";
        }
};

class C:public A,public B{

};

int main(){

    C obj;
    //obj.func();     //gives eroor saying ambiguous
    obj.A::func();
    obj.B::func();
    return 0;
}
