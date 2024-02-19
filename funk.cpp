#include<iostream>
 //void function:which does not return anything
 //parameterised void function
void printName(std::string named){
    std::cout<<"aakash "<<named<<std::endl;
}

int main(){
   std::string name;
   std::cin>>name;
    printName(name);

    std::string name2;
    std::cin>>name2;
    printName(name2);

    return 0;
}