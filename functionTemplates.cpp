#include <iostream>
template <typename t,typename u>

auto max(t num1,u num2){
    return num1>num2 ? num1: num2;
}

// int max(int num1,int num2){
//     return (num1>num2) ? num1 : num2;
// }
// float max3(float num1,float num2){
//     return num1 >num2? num1:num2;
// }
// char max(char c1,char c2){
//     return c1>c2? c1:c2;
// }



int main(){
    //function templates=describes what a function looks like.
    //used to generate as many overload functions as needed,
    //each using diffeent data types

    //overload function meaning:A function with the same name and purpose implemented multiple times with different parameters
    //ex:
    //changed names because of overloaded functions error
    //std::cout<<max('a','b')<<'\n';
    std::cout<<max('100.67','a');  //for string values,compares ASCII value in lexographical order,for that use strcmp() for accurate results.
    //However,it only works if there is a single type of data type,can't handle different datatypes
    //To handle different datatypes,use one more typename
    //after using second typename use auto for function return type or it converts the return type to 't' datatype
    return 0;
}