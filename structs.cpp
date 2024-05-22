// #include <iostream>

// struct student{            //student is like a datatype now
//     std::string name;
//     float gpa;
//     bool enrolled=true;         //can set default to true,then we no need to use enrolled member in our student
// };                         //remember to add ';' here

// int main(){
//     //struct(structures)=A structure that groups related variables under one name
//     //structs can contain many different data types(stru=ing,int,double,bool etc.)
//     //variables in a struct are known as "members"
//     //members can be accessed with . "Class member access operator."

//     student student1;
//     student1.name="Sirsio";
//     student1.gpa=3.45;
    
//     std::cout<<student1.name<<'\n';
//     std::cout<<student1.gpa<<'\n';
//     std::cout<<student1.enrolled<<'\n';

//     student student2;
//     student2.name="Hinga";
//     student2.gpa=2.3;
//     student2.enrolled=true;

//     std::cout<<student2.name<<'\n';
//     std::cout<<student2.gpa<<'\n';
//     std::cout<<student2.enrolled<<'\n';  

//     student student3;
//     student3.name="Capri";
//     student3.gpa=1.3;
//     student3.enrolled=-5;  //Any non zero value evaluates to true

//     std::cout<<student3.name<<'\n';
//     std::cout<<student3.gpa<<'\n';
//     std::cout<<student3.enrolled<<'\n'; 
//     return 0;
// }

//passing struct as a argument(it is passed by value as default)

#include <iostream>

struct car{
     std::string model;
    int year;
    std::string colour;
};
//structs are passed by value not passed by reference,for proof output address of  a struct after passing it to function and before

void printCar(car &carr){  //if i use & here which means pass by reference,the address in int main and here will be same.
    std::cout<<&carr<<'\n';  //memory address will be different here as the output here will be the address of the copy
    std::cout<<carr.model<<'\n';//bacause the original struct isn't passed directly
    std::cout<<carr.year<<'\n';
    std::cout<<carr.colour<<'\n';
}

void paintCar(car &carr,std::string colour){
    carr.colour=colour;
}
//If struct is not passed by reference,we change the colour of the copy as we recieve copy only when struct is passed by value
//So if we want to make changes in the original and want to see the changes we made,use '&'(adderess of operator) to pass by reference.

int main(){
    car car1;
    car car2;

    car1.model="Mustang";
    car1.year=1964;
    car1.colour="Black";

    car2.model="Corvette";
    car2.year=1953;
    car2.colour="White";

    paintCar(car1,"Silver");
    paintCar(car2,"Gold");

    //std::cout<<&car1<<'\n';
    printCar(car1);
    printCar(car2);

    return 0;
}