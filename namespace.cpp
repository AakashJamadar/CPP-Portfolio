// #include <iostream> 

// namespace first{
//     int x=1;
// }

// namespace second{
//     int x=2;
// }

// int main(){
//     using namespace second;
    
//     std::cout<<x;

//     return 0;
// }

#include <iostream> 

int main(){
    using std::string;  //can be used for a particular name 
    using namespace std; //inludes all names which require std 

    string name="Harold";
    cout<<"hello "<<name;

    return 0;
}