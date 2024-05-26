#include <iostream>
#include <cmath>

class shape{
    public:
        double area;
        double volume;
};

class Cube : public shape{
    public: 
        double side;

    Cube(double side){
        this-> side = side;
        this-> area = side* side * 6;
        this-> volume = pow(side,3);
    }
};

class Sphere : public shape{
    public:
        double radius;
    
    Sphere(double radius){
        this-> radius = radius;
        this-> area = 4 * M_PI * (radius*radius);
        this-> volume = (4/3.0) * M_PI * pow(radius,3);  //we wrote 3.0 to make sure integer division doesn't happen but double division does
    }
};

int main(){
    Cube cube(10);      //Since,constructor has a parameter,we need to use parenthesis and add a argument here
    Sphere sphere(5);

    std::cout<<"Area: "<<sphere.area<<" cm^2"<<'\n';
    std::cout<<"Volume: "<<sphere.volume<<" cm^3"<<'\n';
    return 0;
}