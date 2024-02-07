#include <iostream>
   /*take the day number and print the corresponding day(using switch statement)
    for 1 print monday,
    for 2 print tuesday and so on for 7 print sunday*/
int main(){
  int day;
  std::cin>>day;
   switch(day){
    case 1:
        std::cout<<"monday";
        break;
    case 2:
        std::cout<<"tuesday";
        break;
    case 3:
        std::cout<<"wednesday";
        break;
    case 4:
        std::cout<<"thursday";
        break;
    case 5:
        std::cout<<"friday";
        break;
    case 6:
        std::cout<<"saturday";
        break;
    case 7:
        std::cout<<"sunday";
        break;
    default:
        std::cout<<"invalid";    
   }
    return 0;
}
