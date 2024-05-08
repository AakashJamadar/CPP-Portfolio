#include <iostream> 

//IMPLICIT(automatic change)

//order of typecast in implicit conversion
//bool -> char -> short int -> int -> unsigned int -> long int -> unsigned long int -> long  long int -> float -> double -> long double  

int hu=15;
short int ji=8;
int io=hu+ji; //here,complier automatically(imlicitly) converts short int to int before addition (as rank of int>rank of short int )

float u=12.45;
int x=u; //decimal part is truncated automatically (as we assigned it to a integer)

int a=3;
char c='w';
int z=a+c;  //char is implicitly conveted to its ascii value (as int is higher in priority compared to char)

int g=10;
float i=g+1.0; //int is implicitly converted to float before addition (as float is higher in priority than integer)

float j=2.4;
int k=j+2; //HERE,THE INT IS IMPLICITALLY CONVERTED TO FLOAT BEFORE ADDITION LATER EVEERYTHING IS CONVERTED TO INT(AS FLOAT>INT)

char rw=99;  //when rw is printed,it gives c (implicit conversion happened)

//EXPLICIT(2 TYPES)
//1.Converting by assignment  type(expression)
double ui=4.5;
int ik=int(ui)+8; //ui is expllicitly converted to integer
double tyy=int(3.14);

//std::cout<<(char)100;   //explicit conversion happened from int to char

//2.Conversion using cast operator
float hut=5.6;
int ty=static_cast<int>(hut);

//Summary:what is the use of these conversions?
//imagine a test conducted with 10 questions and asked you to caculate individual percentage

int correct=8;
int questions=10;
double score=(correct/double(questions))*100;  //'(double)question' works too
//cout of score gives 0%, as correct and questions are integers(integer division happens),therfore after division the quotient is converted 
//to int part then is multiplied by 100,To overcome this issue we explicitly convert one of the integers to double so the other  
//automatically gets converted to double to do arithmetic operations as the rank of double is higher than integer.

int main(){
    std::cout<<rw<<'\n';
    std::cout<<(char)100<<'\n';   //explicit conversion happened 
    std::cout<<score<<"%";
    return 0;
}


