#include <iostream>

//static keyword 
//data member created using static keyword belongs to class rather than object
//since it belongs to class and not to object there is no need to create an object to access it

class Hero{
    public:
        int health;
        static int timeToComplete;

        static int random(){
            return timeToComplete=9;     //we cannot use this->,health here as it gives error
        }
        //using assignment operator
        //return timeToComplete=9;  returns 9
        //somparison operator(==)
        //return timeToComplete==9; returns 0(as it is false)
        //return timeToComplete==5;  returns 1(as it is true)

};

//it is initialised outside the class like this
//syntax:datatype,className,::,fieldname/data member name=value;
int Hero::timeToComplete=5;

// int main(){
//     std::cout<<Hero::timeToComplete<<std::endl;
    
//     //this works too but is not recommended to use as it belongs to class and not to the object
//     Hero a;
//     std::cout<<a.timeToComplete<<std::endl;  //std::cout<<a.Hero::timeToComplete; also worked

//     Hero b;
//     b.timeToComplete=10;
//     std::cout<<a.timeToComplete<<'\n';
//     std::cout<<b.timeToComplete<<'\n';  //10 was printed in both class because static member is not for class as said earlier
    
//     return 0;
// }

//Static functions

//there is no need to create object
//It has no this keyword(because,this is the pointer to current obj and we have no obj here hence no this pointer)

//static functions can access static members only

int main(){
    std::cout<<Hero::random();
    return 0;
}