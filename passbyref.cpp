#include <iostream>
//pass by reference
void doSomething(std::string &su){
    su[0]='j';
    std::cout<<su<<std::endl;
}

int main(){
    std::string s="aakash";
    doSomething(s);
    std::cout<<s<<std::endl;
    return 0;
}
