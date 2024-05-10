// #include <iostream>

// int main(){
//     int month;
//     std::cout<<"Enter a month between 1 to 12.";
//     std::cin>>month;
//     switch(month){
//         case 1:
//           std::cout<<"January";
//           break;
//         case 2:
//           std::cout<<"February";
//           break;
//         case 3:
//           std::cout<<"March";
//           break;
//         case 4:
//           std::cout<<"April";
//           break;
//         case 5:
//           std::cout<<"May";
//           break;
//         case 6:
//           std::cout<<"June";
//           break;
//         case 7:
//           std::cout<<"July";
//         case 8:
//           std::cout<<"August";
//           break;
//         case 9:
//           std::cout<<"September";
//           break;
//         case 10:
//           std::cout<<"October";
//           break;
//         case 11:
//           std::cout<<"November";
//           break;
//         case 12:
//           std::cout<<"December";
//           break;
//         default:
//           std::cout<<"Enter a month between 1 to 12 only.";
//     }
//     return 0;
// }

#include <iostream>

int main(){
    char grade;
    std::cout<<"Enter your grade in letters:";
    std::cin>>grade;
    switch(grade){
        case 'A':
          std::cout<<"you did great!";
          break;
        case 'B':
          std::cout<<"you did good";
          break;
        case 'C':
          std::cout<<"you need to improve";
          break;
        case 'F':
          std::cout<<"YOU FAILED";
          break;
        default:
          std::cout<<"Enter proper grade";
    }
    return 0;
}

