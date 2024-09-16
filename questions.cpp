#include <iostream>

// int main(){
//     int i = 1;
//     for( ; i <= 5; ){
//         if(i <= 5){
//            std::cout<<"Hi\n"; 
//         }
//         i++;
//     }
//     return 0;
// }

int main(){
    int n;
    if(std::cin >> n){      // The cin >> n will be true if the input operation succeeds, regardless of the value of n (0 too)
        std::cout << "Hello\n";
    }else {
        std::cout << "Invalid\n";
    }
    return 0;
}

// int main(){
//     int n = 4;
//     if(std::cout << n){      // Will be true as long as the cout won't give an error which rarely happens
//         std::cout << "Hello\n";
//     }
//     return 0;
// }