#include <iostream>

//poly=many,,,morph=forms,,,i,e existing in many forms

//paagalon ki tarah puchi jaati hai interview mein bhi aur viva mein bhi

//types of poymorphism

//compile-time: The phase when source code is translated into machine code,,,Occurs before the program runs
//run-time: The phase when the program is actually executing,,,Occurs while the program is running

//                          1. Compile-time() polymorphism/Static polymorphism
//The ability of the program to resolve the method calls at compile time rather than run time 
//polymorphism is nothing but existing in multiple forms so in this we resolve the problem of overloading in different times like compile time and run time
//we get to know at compile time that things exist in multiple forms & run time is other way

//can be achieved by function overloading or operator overloading

//a.Function overloading (increases readability of the program)

//to achieve function overloadng,either number or type of parameters must be different with functions having same name
//Functions that differ only in their return type cannot be overloaded

// class A{
//     public:
//         void sayHello(){
//             std::cout<<"Hello Raj\n";
//         }

//         void sayHello(std::string name,char ch){
//             std::cout<<"Hello "<<name<<'\n';
//         }
//         int sayHello(int n){
//             std::cout<<"Hello Faaj\n";
//             return n;
//         }
//         void sayHello(char ch){
//             std::cout<<"Hello Raj\n";
//         }

// };

// int main(){
//     A obj;
//     obj.sayHello(5);
//     return 0;
// }

//Default arguments (not part of polymorphism,just a feature of function parameters)
//A default argument is a value provided in a function declaration automatically assigned by the compiler if the function caller doesn't
//provide a value for the argument with a default value.However if arguments are passed while calling the function, the default values are ignored
//Ex:A function with default arguments can be called with 2 or 3 or 4 arguments

// int add(int k,int l,int m=0,int n=0){
//     return k+l+m+n;
// }

// int main(){
//     std::cout<<add(2,3)<<'\n';
//     std::cout<<add(2,3,4)<<'\n';
//     std::cout<<add(2,3,4,5)<<'\n';
//     return 0;
// }

//b.Operator overloading

//It is an idea of giving special meaning to an existing operator in C++ without changing its original meaning.
//when we want any operator to custom tasks,ex:making the operator '+' to print something/subtract instead of adding or concatinating strings
//'+' is a binary(a+b) operator just like '++' is a unary(i++) operator

//syntax for operator overloading

//return-type operator +(parameter inside)
//{

//}
//In a+b; b is the argument and a is the current object(pointed by this pointer)

//let's create a operator to subtract the int values of 2 objects

// class A{
//     public:
//         int a;

//         //below if const was added after the (),it means the function doesn't modify the object on which it is called(here,l.h.s of the '+')
//         // int operator+(A const&obj){        //added const since we are not modifying the argument object
//         //     return a-obj.a;     //(this is nothing but (this->a-obj.a))
//         // }

//         //let's overload to print something
//         void operator+(A const &obj){
//             std::cout<<"Hello World!\n";
//         }

//         //let's overload () operator
//         void operator()(A const&obj){
//             std::cout<<"Parenthesis\n";
//         }
//         void operator()(){                  //same operator without parameter
//             std::cout<<"Parenthesis\n";
//         }
// };

// int main(){
//     A obj1,obj2;
//     obj1.a=5;
//     obj2.a=9;
//     //std::cout<<"Output: "<<obj1+obj2;      //now,obj1 will be the current object and obj2 will be the argument for the operator overloading function
//     obj1+obj2;
//     obj1(obj2);     //here we are using obj2 inside the parenthesis unlike the obj2 after the '+' in previous case,because
//     //+ is a binary operator and it is designed to work when it is between 2 objects
//     //whereas,() is a function call operator,works when it is placed immediately after the object,with any arguments inside the object
//     obj1();
//     obj2();

//     //All operator aren't called in the same way

//     return 0;
// }
//operator overloading cannot be performed on the operators like sizeof operator,::,.,.*(pointer to member operator),?:(ternary operator) etc


//                                  2.Run-time Polymorphism(Dynamic polymorphism)

//The ability of the program to resolve method calls at run time rather than compile time 

//can be achieved by method overloading

class Animal{
    public:
        void sound(){
            std::cout<<"Animal sound\n";
        }
};

class Dog:public Animal{
    public:
        void sound(){
            std::cout<<"Dog barking\n";
        }
};

int main(){
    Dog obj;
    obj.sound();
    //when dog object is created it overrides the sound method preseent in the Animal by adding its own version
    return 0;
}

//Rules for method overriding 
//method present in parent class and child class should have the same name,same parameters(nof parameters too),same return type
//good practice is to use virtual keyword in parent class before void
//It is possible through inheritance only