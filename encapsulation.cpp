#include <iostream>

//Data/Information hiding is called Encapsulation
//Abstraction is implementation hiding

//Definition:wrapping up data member and functions

//Fully encapsulated class is achieved by keeping all data members as private

//Advantages:
// 1.Hide data to increase security
// 2.Class can be made to "read only"
// 3.Code reusability can be achieved (by allowing classes to be easily integrated into different parts of a program)
// 4.Unit testing (testing individual components or units of code, such as functions, methods, or classes, to ensure they work as expected.)
// 5.simplified debugging and testing
// 6.Ease of maintenance (Since internal implementation details are hidden, changes can be made without affecting other parts of the program that rely on the encapsulated code.)

class Student{
    private:
        std::string name;
        int age=16;
        int height;
        
    public:
        int getAge(){
            return age;
        }
};

int main(){
    Student s;
    std::cout<<s.getAge();
    return 0;
}