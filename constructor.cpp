#include <iostream>
//What happens behind the scenes when object is created/instantiated ?
//-->Constructor is called.
//What is a Constructor ?
//A Constructor is a special member function of a class and is called automatically when an object of that class is instantiated.
//Key characteristics of a constructor
// 1.A Construcor has the same name as the class in which it is defined
// 2.Constructors do not have return types,not even void
// 3.They are automatically called wehn an object is creted
// 4.They initialize the object's members

//              Types of Constructor

// 1.Default constructor

// a.A constructor that takes no arguments
// b.If no constructors are explicitly defined,the compiler provides a default constructor

class Hero {
    public:
        int health;

        Hero (){
            //default constructor
            std::cout<<"hello\n";
            health=0;
        }

        Hero (int h){
            //Explicitly added constructor,,,when this constructor is created default constructor goes out of scope
            std::cout<<"constructor is called\n";   
        }
};

//When we create a object(let it be Hero h1) of type Hero,bts h1.Hero() is called automatically

//To test it,,,test shows that the costructor is called automatically when an object is created,,,creating 2 objects calls the constructor twice
//The reason we create a objest like Hero h1; is because the default constructor is non parameterized(WE ALWAYS CREATE
// THE OBJECT TO MATCH THE CONSTRUCTOR SIGNATURE i,e the number of parameters ),if we create parameterized constructor
//the default constructor goes out of scope causing an error when we try to create an object like Hero h1; unless we create a new non parameterized constructor

// int main(){
//     //static allocation
//     Hero h1;   //This object can only be created if we have a constructor withot parameter,since the default constructor(non parameterized constructor)
//     //goes out of scope when we create a constructor with parameters,we need to create a new non parameterized consructor again explicitly.
//     // adding () after the h1 doesn't work here as the compiler interprets(not that interpret)/thinks it as a function causing ambiguity

//     //dynamic allocation
//     Hero *h2=new Hero();
//     //However adding () is allowed in dynamic allocaton because the new keyword tells the compiler to allocate memory and intialize an object
//     return 0;
// }

//Conclusion:The object we create must be matching the constructor signature (i,e in terms of the number of parameters,,types of parameters too)

// 2.Parameterized constructor

class Dragon{
    public:
        int health;
        char level;


        //Parameterized constructor
        Dragon(int health){
            this->health=health;  //health=helath assigns the pparameter health to itself, so we use this-> 
            //this-> is a pointer to the current object, i,e it stores the memory address of the current object
            //this-> does the  job of both dereferencing the pointer and accessing the members
            std::cout<<"Address of this pointer: "<<this<<'\n';
            //Note:this-> is a special pointer that cannot be dereferenced like regular pointer nor using &this
        }
        //conatructor with 2 parameters
        Dragon(int health,int level){
            this-> health=health;
            this-> level=level;
            std::cout<<"Address of this: "<<this<<'\n';
        }
        void printAddress(){
            std::cout<<"Address of this pointer: "<<this<<'\n';
        }
};

// int main(){
//     Dragon elec(3000);
//     std::cout<<"Address of the elec object: "<<&elec<<std::endl;
//     elec.printAddress();

//     Dragon baby(1200,'a');
//     std::cout<<"address of baby object: "<<&baby<<std::endl;
//     baby.printAddress();

//     elec.printAddress();
//     //Above we have 2 objects,this pointer handles this case by pointing to elec first and then points to baby when we create baby
//     //this pointer dynamically points to the address of the object that is currently invoking the member function

//     //Static allocation
//     Dragon *drag=new Dragon(2000,'c');
//     drag->printAddress();
//     (*drag).printAddress();  //First method is good practice (drag->)
//     return 0;
// }

//                      this-> keyword

//this-> is a pointer to the current object, i,e it stores the memory address of the current object
//this-> does the job of both dereferencing the pointer and accessing the members

//Proof that it points to the current object can be obtained by printing the address of this and ramesh ,,,,we got the same address

// 3.Copy constructor

//used to create a new object by copying an existing object
//It creates a new object by copying the values of old object to new object

class Human {
    public:
        int age;
        std::string color;

        Human(){
            std::cout<<"Simple constructor called\n";
        }
        Human(int age,std::string color){
            this-> age=age;
            this-> color=color;
        }

        //Copy constructor
        Human(Human &object){
            std::cout<<"Copy constructor called\n";
            age=object.age;
            this-> color=object.color;  //works without this-> here as there is no ambiguity
        }

        void print(){
            std::cout<<"Age is: "<<age<<std::endl;
            std::cout<<"Color is: "<<color<<'\n';
        }
};

int main(){
    Human h(20,"Black");
    h.print();

    //Copy constructor
    Human hh(h);   //This is called copying an object ,,it works as hh.age=h.age and hh.color=h.color bts which is done by the default copy constructor
    hh.print();
    //Just like there is a defult constructor for every class,there is alsoa  default copy constructor for every class which gets vanished after creating a explicit copy constructor

    std::cout<<"Address of h: "<<&h<<std::endl;
    std::cout<<"Address of hh: "<<&hh<<'\n';
    //Of course both objects will have different addresses
    return 0;
}

//Why does copy constructor show error when object is passed without reference(i,e not using ampersand(&))

//when we pass by value it means we are passing a copy,so to create a copy of that object we need copy constructor (because that's what copy constructor is used for,to create copy of objects)
//So it tries to call the copy constructor we have created to creata a copy object,but the copy constructor needs an object as a parameter to copy and object
//needs copy constructor to create it's copy.This interdependency causes an infinite loop resuting in stack overflow

//In short, consrtuctor needs an object to create a copy of that object and object needs a copy constructor to be called in order for it's copy creation

//If we pass by reference,the copy constructor no longer needs to create a copy object and can do it's process of creating copy object with the help of the passed object

//default copy constructor does the shallow copy