#include <iostream>

class pizza{
    public:
        std::string topping1;
        std::string topping2;

        pizza(){     //pizza constructor with no parameters

        }
        pizza(std::string topping1){
            this-> topping1=topping1;
        }
        pizza(std::string topping1,std::string topping2){
            this-> topping1=topping1;
            this-> topping2=topping2;
        }
};

int main(){
    //overloaded constructors = multiple constructors with same name but different parameters
    //allow for varying arguments when instantiating an object

    //overloaded constructors allow for a multipe objects with varying number of attributes

    pizza pizza1("pepperoni");
    pizza pizza2("peppers","mushroom");
    pizza pizza3;                   //pizza object with no arguments

    std::cout<<pizza3.topping1<<'\n';
    std::cout<<pizza3.topping2<<'\n';
    return 0;
}