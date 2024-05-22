//enum is also known as enumeration
#include <iostream>

enum Day {sunday=0 , monday=1 , tuesday=2 , wednesday=3 , thursday=4 , friday=5 , saturday=6 };
//If you don't assign integral values to these names,it will implicitly assign values from 0
//We did that explicitly above
//We can use planet names and assign thier size(diameter) as the integral values too


int main(){
    //enums=A user defined data type that consists of paired named-integer constants
    //GREAT if you have a set of potential options

    //In C++, you cannot use strings directly in a switch statement. switch statements work 
    //with integral types (int, char, enum, etc.), but not with strings.
    //So, we use enums

    Day today=sunday;   //If you use a name out of the enum,it won't accept

    //Within the case you can use associated values too,but it's not that readable

    switch (today){
        case sunday : std::cout<<"It is Sunday!\n";
                       break;
        case monday : std::cout<<"It is Monday!\n";
                       break;
        case tuesday : std::cout<<"It is Tuesday!\n";
                       break;
        case wednesday : std::cout<<"It is Wednesday!\n";
                       break;
        case thursday : std::cout<<"It is Thursday!\n";
                       break;
        case friday : std::cout<<"It is Friday!\n";
                       break;
        case saturday : std::cout<<"It is Saturday!\n";
                       break;
        default : std::cout<<"Invalid!";
    }
    return 0;
}