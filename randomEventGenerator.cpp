#include <iostream>
#include <ctime>

int main(){
    srand(time(0));
    int randNum=rand()%5+1;
    switch(randNum){
        case 1:std::cout<<"you won a sticker pack";
               break;
        case 2:std::cout<<"you won a t-shirt";
               break;
        case 3:std::cout<<"you won a pair of shoes";
               break;
        case 4:std::cout<<"you won a gift card";
               break;
        case 5:std::cout<<"you won a cash prize";
    }
    return 0;
}