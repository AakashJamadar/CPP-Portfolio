#include <iostream>
#include <cmath>

char getUserChoice(){
        char player;
        do {
            std::cout<<"*****Rock-Paper-Scissors game!*****\n";
            std::cout<<"r-rock\n";
            std::cout<<"p-Paper\n";
            std::cout<<"s-Scissors\n";
            std::cout<<"Choose one of the above\n";
            std::cin>>player;
        }while(player!='r' && player!='p'  && player!='s');

    return player;
}

char getComputerChoice(){
    char computer;
    srand(time(0));
    int num=rand()%3+1;
    switch(num){
        case 1:return 'r';
        case 2:return 'p';
        case 3:return 's';
    }
    return 0;
}

void showChoice(char choice){
    switch(choice){
        case 'r':std::cout<<"Rock\n";
                 break;
        case 'p':std::cout<<"Paper\n";
                 break;
        case 's':std::cout<<"Scissors\n";
                 break;
    }
}

void chooseWinner(char player,char computer){
    switch(player){
        case 'r': if(computer=='r'){
                    std::cout<<"It's a tie!\n";
                  }else if(computer == 'p'){
                    std::cout<<"You lose\n";
                  }else {
                    std::cout<<"You win\n";
                  }
                  break;
            case 'p': if(computer=='r'){
                    std::cout<<"You win\n";
                  }else if(computer == 'p'){
                    std::cout<<"It's a tie\n";
                  }else {
                    std::cout<<"You lose";
                  }
                  break;   
            case 's': if(computer=='r'){
                    std::cout<<"You lose\n";
                  }else if(computer == 'p'){
                    std::cout<<"You win\n";
                  }else {
                    std::cout<<"It's a tie\n";
                  }
                  break;               
    }
}

int main(){
    char player;
    char computer;
    player=getUserChoice();
    std::cout<<"Your choice: ";
    showChoice(player);
    computer=getComputerChoice();
    std::cout<<"Computer's choice: ";
    showChoice(computer);

    chooseWinner(player,computer);
    return 0;
}

// This method is not recommmended as it may lead to stack overflow if the user repeatedly enters invalid output (My method)
// char getUserChoice(){
//         char player;
//             std::cout<<"*****Rock-Paper-Scissors game!*****\n";
//             std::cout<<"r-rock\n";
//             std::cout<<"p-Paper\n";
//             std::cout<<"s-Scissors\n";
//             std::cout<<"Choose one of the above\n";
//             std::cin>>player;
//             if(player!='r'  && player!='p' && player!='s'){
//                 std::cout<<"Invalid choice\n";
//                 getUserChoice();
//             }

//     return player;
// }