#include <iostream>
#include <ctime>

int main(){
    int randNum;
    int guess;
    int tries=0;
    srand(time(0));
    randNum=rand()%100+1;
    std::cout<<"*********RANDOM NUMBER GENERATOR*********\n";
    
    do{
        std::cout<<"Guess a number between 1 to 100:";
        std::cin>>guess;
        tries++;
        if(guess>randNum){
            std::cout<<"Too high!\n";  
        }else if(guess<randNum){
            std::cout<<"Too low!\n";
        }else{
            std::cout<<"You guessed it right!\n"<<"You took "<<tries<<" tries\n";
        }
    }while(guess!=randNum);
    std::cout<<"*****************************************";
    return 0;
}