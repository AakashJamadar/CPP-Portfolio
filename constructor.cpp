// #include <iostream>

// class student{
//     public:
//         std::string name;
//         float gpa;
//         int age;

            //This is a constructor(student({}))

//         // student(std::string name,float gpa,int age){
//         //    this-> name = name;  //we use this-> when the names of the parameters and the names of the attributes are same
//         //    this-> gpa = gpa;    //this-> is compulsory when the names of the attributes and the names of the parameters are same
//         //    this-> age = age;    //othertime this-> is not required
//         // }
//         student (std::string x,float y,int age){
//             this->name=x;   //we can use this-> even when the name is different
//             gpa=y;          //as names are different,this-> isn't necessary
//             this-> age=age; //As name was same,we used this->
//         }
// };

// int main(){
//     //constructor = special method that is automatically called when an object is instantiated
//     //useful for assigning values to attributes as arguments

//     student student1("Hikaru",3.2,36);  //Here,student is a class and student1 is an object
//     student student2("Aaron",2.1,30);
//     student student3("Rijra",3.3,29);

//     std::cout<<student3.name<<'\n';
//     std::cout<<student3.gpa<<'\n';
//     std::cout<<student3.age<<'\n';

//     return 0;
// }

//Example-2 (Cars class)

#include <iostream>

class car{
    public:
        std::string make;
        std::string model;
        int year;
        std::string colour;

        car(std::string make,std::string model,int year,std::string colour){
            this-> make=make;
            this-> model=model;
            this-> year=year;
            this-> colour=colour;
        }
};

int main(){
    car car1("Chevy","Corvette",1953,"Silver");
    car car2("Ford","Mustang",1964,"Gold");

    std::cout<<car2.make<<'\n';
    std::cout<<car2.model<<'\n';
    std::cout<<car2.year<<'\n';
    std::cout<<car2.colour<<'\n';

    return 0;
}
