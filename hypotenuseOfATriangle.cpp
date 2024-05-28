#include <iostream>
#include <cmath>

int main(){
    double a;
    double b;
    double c;
    std::cout<<"Enter the length of side AB in the triangle ABC: ";
    std::cin>>a;
    std::cout<<"Enter the leghth of side BC in the trinagle ABC: ";
    std::cin>>b;
    c=sqrt(pow(a,2)+pow(b,2));
    std::cout<<"Length of the hypotenuse of triangle ABC is: "<<c;
    return 0;
}