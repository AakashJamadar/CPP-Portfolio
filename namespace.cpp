#include <iostream>

namespace first{
    int x=5;
}
namespace second{
    int x=7;
}

int main(){
    using namespace first;
    std::cout<<x;  // second::x/first::x
    return 0;
}