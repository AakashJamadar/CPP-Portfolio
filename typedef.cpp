#include <iostream>
#include <vector>

typedef std::vector<std::pair<std::string,int>> vecPairInt_t;  //good practice to end typedef names with _t
typedef std::string str_t;
//using does the sam work
using vec=std::vector<int>;
using integer=int;

int main(){
    vecPairInt_t v1;
    str_t name="harry";
    integer test=4;
    std::cout<<name<<'\n'<<test;
    return 0;
}