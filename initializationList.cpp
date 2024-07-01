//              initialization list gfg

//https://www.geeksforgeeks.org/when-do-we-use-initializer-list-in-c/

//1.Constructor is used to initialize the data members of the class
//2.It is like a constructor but constructor cannot be used always to initialize members,IL is used at that time

//Syntax: Point(int i = 0, int j = 0): x(i), y(j) {},,,where Point is class name and x,y are data members

#include <iostream>

// class Point{
//     private:
//         int x;
//         int y;

//     public:
//         Point(int i=0,int j=0): x(i),y(j) {     //int i=0 is default value of i of course,if object had arguments i will be assigned according to them
//             //This is a Intializaton list
//         }

//         //The above use of initialization list is optional as we could have used the constructor instead
//         Point(int i=0,int j=0){
//             x=i;
//             y=j;
//         }

//         int getX() const {return x;}
//         int getY() const {return y;}        //used const as we are not modifying any values
// };

// int main(){
//     Point p1(4,5);
//     Point p2;
//     std::cout<<p1.getX()<<" "<<p1.getY()<<std::endl;
//     std::cout<<p2.getX()<<" "<<p2.getY()<<std::endl;        //outputs 0,0 here as we had defined int i=0,int j=0
//     return 0;
// }

//Situations where initialization of data members inside constructors doesn't work and initialization list must be used

//1. For Initialization of Non-Static const Data Members

// class Test{
//     private:
//         const int t;    //We have const member here,so Il is must
//         //because in constructor we write t=value,,compiler throws an error saying "cannot assign to a const variable"

//     public:
//         Test(int t=0):t(t){}

//         int getT(){return t;}
// };

// int main(){
//     Test t1(10);
//     std::cout<<t1.getT();
//     return 0;
// }

//2. For Initialization of Reference Members

// class Test{
//         int &t;     //Holds the refernce of x and not the ref as t(ref) makes it to (because ref has &x)
//         //If we had no & here,the change in value of x would not affect data member t because t had copy of x(not copy of ref,as we write t(ref in IL))
//     public:
//         Test(int &ref): t(ref){     //holds the reference of x
//             //Initialize list must be used
//         }
//         int getT(){return t;}
// };

// int main(){
//     int x=20;
//     Test t1(x);     //cannot diresctly use t1(20) because the parameter int &ref expects a variable's reference/address and not the value directly
//     std::cout<<t1.getT()<<std::endl;
//     x=30;
//     std::cout<<t1.getT();
//     return 0;
// }

// 3. For Initialization of Member Objects that do not have a Default Constructor

// class A{
//         int i;

//     public:
//         A(int);     //this is declaration of the constructor
// };

// A::A(int arg){      //this is both declaration and definition of a constructor
//     i=arg;
//     std::cout<<"A's constructor is called: Value of i: "<<i<<std::endl;
// }

// class B{
//         A a;
//     public:
//         B(int);
// };

// B::B(int x):a(x){       //Initialization list must be used
//     //code after coming here goes to obj a and then to class A's constructor
//     //If class A's constructor had 2 parameters you can do a(x,x+1) while maintaing 1 parameter in class B,or a(x,y) if class B had 2 parameters either
//     //If class B had more data members(int k,int l) we can do B(int x):a(x),k(x+1),l(x+2) where k and l are members of class B 
//     //and a(a,x+1,x+2.... should be equivalent to the number of parameters of A's constructor because that is what that calls the A's constructor.)
//     //of course class A should also have the same number of data members because its no constructor's parameters are decided by its no of data members
//     //If you want something else inside k(),l() you need to have more variables in class B's constructor

//     //Conclusion:number of variables inside a class and number of parameters inside the constructor of that class need not be same,either of them can have more in number
//     //so the only thing that should be same is te number of  parameters in class A's constructor  and the no of parameters in class B's a() obviously as that is what calls A's constructor
//     //Ex code:
// //     #include <iostream>
// // using namespace std;

// // class A {
// //     int i, j, k;

// // public:
// //     A(int, int, int); // A's constructor expects 3 parameters
// // };

// // A::A(int arg1, int arg2, int arg3) {
// //     i = arg1;
// //     j = arg2;
// //     k = arg3;
// //     cout << "A's Constructor called: Values of i, j, k: " << i << ", " << j << ", " << k << endl;
// // }

// // class B {
// //     A a; // Member object of type A
// //     int x;
// //     double y;
// //     string z;

// // public:
// //     B(int a1); // Only one parameter
// // };

// // B::B(int a1)
// //     : a(a1, 20, 30), // Initializing 'a' with exactly 3 parameters
// //       x(40),        // Initializing 'x' with a fixed value
// //       y(50.5),      // Initializing 'y' with a fixed value
// //       z("Hello")    // Initializing 'z' with a fixed value
// // {
// //     cout << "B's Constructor called" << endl;
// // }

// // int main() {
// //     B obj(10);
// //     return 0;
// // }

//     std::cout<<"B's constructor called";
// }

// int main(){
//     B obj(10);
//     return 0;
// }

// gfg:If class A had both default and parameterized constructors, then Initializer List is not a must if we want to initialize “a” using 
// the default constructor, but it is must to initialize “a” using the parameterized constructor. 

//Constructor without parameter is also a default constructor,it need not be the one provided by compiler

// Conclusion: If a class (let's call it A) has no constructor of it's object type and is a data member of another class (B), 
// then using an initializer list in B's constructor is necessary when initializing A.
//ex:class A had default and single parameterized constructor and class B had  adata member a of type A with 2 arguments,then initializaton list is a must 

//In summary, A(int); is only a declaration, and A(int) {} is both a declaration and definition.

//4. For Initialization of Base Class Members

//Like point 3, the parameterized constructor of the base class can only be called using the Initializer List.

// class A{
//         int i;

//     public:
//         A(int);
// };

// A::A(int arg){
//     i=arg;
//     std::cout<<"A's constructor called,value of i: "<<i<<'\n';
// }

// class B:A{      //no access specifier is mentioned here,so default is private
//     public:
//         B(int);

// };

// B::B(int x):A(x){
//     std::cout<<"B's constructor called";
// }

// int main(){
//     B b(10);
//     return 0;
// }

//5. When the Constructor’s Parameter Name is the Same as Data Member

//In this case,either this-> pointer has to be used or the initializaton list has to be used

// class A{
//     int i;
// public:
//     A(int);

//     int getI()const{return i;}

// };
// A::A(int i):i(i){
   
// }
//  //another way to do it
//     // A::A(int i){
//     //     this->i=i;
//     // }

// int main(){
//     A obj(10);
//     std::cout<<obj.getI();
// }

// 6.For performance reasons

//It is better to initializee all class members in the initialization list insted of assigning values inside the body

//consider the following example

// class MyClass{
//     //Type variable;
//     //MyClass(Type a){   //Assume that the Type is an already declared class with appropriate constuctors and operators(referring to assignment operator)
//         //variable=a;
//     //}
// };

//Here the compiler follows the following steps to create an object of type MyClass

//1.Type's constructor is called first for 'a' (Type’s constructor is called to create this argument a.(creates temporary obj))
//2.Default construct "variable"  (meaning:default constructor of the class Type is used to create the object variable)
//3.The assignment operator of the "Type" is called inside the body of the MyClass() constructor to assign "variable=a".
//4.Then destructor of the "type" is called for 'a'since it goes out of scope

//Let's consider the same code with initializer list

// class MyClass{
//     // Type variable;
//     // MyClass(Type a):variable(a)a{    //Assume that the "Type" is an already declared class
//                                         //with appropriate constructors and operators(referring to assignment operator)
//     // }
// };

//with the initializer list following steps followed by the compiler are

//1.Type's constructor is called first for'a'(Type’s constructor is called to create this argument a.(creates temporary obj))
//2. Parameterized constructor of “Type” class is called to initialize: variable(a). (The syntax variable(a) in the initializer list tells the compiler to construct "variable" using "a" as an argument.)
//3. The destructor of “Type” is called for “a” since it goes out of scope.

//As we can see from this example if we use assignment inside constructor body there are three 
// function calls: constructor + destructor + one addition assignment operator call. And if we use Initializer 
// List there are only two function calls: copy constructor + destructor call.

//This assignment penalty will be much more in “real” applications where there will be many such variables. 


//              Parameter vs Uniform Initialization in C++

// It is better to use an initialization list with uniform initialization {} rather than parameter initialization () to avoid the 
// issue of narrowing conversions and unexpected behavior. It provides stricter type-checking during initialization and prevents 
// potential narrowing conversions

//code using parameter initializaion 

// class Base{
//     char x;
// public:
//     Base(char a):x(a){

//     }
//     void print(){
//         std::cout<<static_cast<int>(x);
//     }
// };

// int main(){
//     Base b(300);
//     b.print();
//     return 0;
// }

//In the above code, the value 300 is out of the valid range for char, which may lead to undefined behavior and potentially 
//incorrect results. The compiler might generate a warning or error for this situation, depending on the compilation settings.

// Code using uniform initialization {}

//By using uniform initialization with {} and initializing x with the provided value a, the compiler will perform stricter 
//type-checking and issue a warning or error during compilation, indicating the narrowing conversion from int to char.

// Here is code with uniform initialization {} , which results in a warning and thus better to use

class Base{
    char x;
public:
    Base(char a):x{a}{

    }
    void print(){
        std::cout<<static_cast<int>(x);
    }
};

int main(){
    Base b{300};
    b.print();
    return 0;
}

//output:

// PS D:\C++\OOPs cpp> cd "d:\C++\OOPs cpp\" ; if ($?) { g++ initializationList.cpp -o initializationList } ; if ($?) { .\initializationList }
// initializationList.cpp: In function 'int main()':
// initializationList.cpp:318:15: error: narrowing conversion of '300' from 'int' to 'char' [-Wnarrowing]
//   318 |     Base b{300};