#include <iostream>

class Stove{
    private:                //Default is Private
        int temperature=0;
    public: 

        //You can invoke setter within a constructor too
        Stove(int tempo){   //here good practice is to keep same name as that of the setter,i kept different to test
            setTemperature(tempo);  //we don't necessarily need the line again (temperature=temp;) as it is already present in our code
        }  //Instantiate stove object in int main to use this constructor (Stove stove1(argument);)
          
        int getTemperature(){    //This is a getter 
            return temperature;
        } 
        void setTemperature(int temp){
            if(temp<-10){   //inside if condition,the parameter name should be used(here,temp)
                temperature=0;     //while assigning values ,we use member name that is present in the class,bcoz we return using getter and the getter has return member name(here,temperature)
            }else if(temp>50){
                temperature=50;
            }else {
                temperature=temp;
            }
            //temperature = temp;   //just checking if something happens when we use this-> even when the parameters and the arguments are different
        }
};

int main(){
    // Abstraction = hiding unnecessary data from outside a class
    // getter = function that makes a private attribute READABLE
    // setter = function that makes a private attribute WRITEABLE

    Stove stove(10);
    // stove.temperature=40;   //If public is present in the class,we can modify the values.If private,we can't(so we use get and set)
    // std::cout<<stove.temperature<<'\n';  //cannot access like this as the member is private

    //std::cout<<stove.getTemperature()<<'\n';  //output will still be 0 even after we pass 500,as getter cannot modify data but retrives it


    //stove.setTemperature(7);
    std::cout<<stove.getTemperature();

    return 0;
}