#include <iostream>
#include <ctime>

void drawBoard(char* spaces){  //if we use array without specifying its size,it behaves as a pointer to array's first element
    std::cout<<'\n';           //so,it ends up behaving like char* spaces,if used array mentioning size of it then the array 
    std::cout<<"     |     |     \n";  //in the int main function call decays into a pointer pointing to the first element of the array.
    std::cout<<"  "<<spaces[0]<<"  |  "<<spaces[1]<<"  |  "<<spaces[2]<<"  \n";// so use anyone of 3,,all end up behaving same
    std::cout<<"_____|_____|_____\n";
    std::cout<<"     |     |     \n";
    std::cout<<"  "<<spaces[3]<<"  |  "<<spaces[4]<<"  |  "<<spaces[5]<<"  \n";
    std::cout<<"_____|_____|_____\n";
    std::cout<<"     |     |     \n";
    std::cout<<"  "<<spaces[6]<<"  |  "<<spaces[7]<<"  |  "<<spaces[8]<<"  \n";
    std::cout<<"     |     |     \n";
    std::cout<<'\n';
}
void playerMove(char* spaces,char player){
    int number;
    do{
        std::cout<<"Enter a spot to place a marker(1-9): ";
        std::cin>>number;
        number--;

        if(spaces[number]==' '){
            spaces[number]=player;  //doesn't cause any problem even if number's out of range
            break;
        }
    }while(number<0 || number>8 || spaces[number]!= ' ');  //can use while(true) too,check at last
    
}
void computerMove(char* spaces,char computer){
    int number;
    srand(time(0));

    while(true){
        number=rand()%9;
        if(spaces[number]==' '){
            spaces[number]=computer;
            break;
        }
    }
}
bool checkWinner(char* spaces,char player,char computer){
    if(spaces[0]!=' ' && spaces[0]==spaces[1] && spaces[1]==spaces[2]){
        spaces[0]==player ? std::cout<<"YOU WIN!\n" :std::cout<<"YOU LOSE!\n";
    }else if(spaces[3]!=' ' && spaces[3]==spaces[4] && spaces[4]==spaces[5]){
        spaces[3]==player ? std::cout<<"YOU WIN!\n" :std::cout<<"YOU LOSE!\n";
    }else if(spaces[6]!=' ' && spaces[6]==spaces[7] && spaces[7]==spaces[8]){
        spaces[6]==player ? std::cout<<"YOU WIN!\n" :std::cout<<"YOU LOSE!\n";
    }else if(spaces[0]!=' ' && spaces[0]==spaces[3] && spaces[3]==spaces[6]){
        spaces[0]==player ? std::cout<<"YOU WIN!\n" :std::cout<<"YOU LOSE!\n";
    }else if(spaces[1]!=' ' && spaces[1]==spaces[4] && spaces[4]==spaces[7]){
        spaces[1]==player ? std::cout<<"YOU WIN!\n" :std::cout<<"YOU LOSE!\n";
    }else if(spaces[2]!=' ' && spaces[2]==spaces[5] && spaces[5]==spaces[8]){
        spaces[2]==player ? std::cout<<"YOU WIN!\n" :std::cout<<"YOU LOSE!\n";
    }else if(spaces[0]!=' ' && spaces[0]==spaces[4] && spaces[4]==spaces[8]){
        spaces[0]==player ? std::cout<<"YOU WIN!\n" :std::cout<<"YOU LOSE!\n";
    }else if(spaces[2]!=' ' && spaces[2]==spaces[4] && spaces[4]==spaces[6]){
        spaces[2]==player ? std::cout<<"YOU WIN!\n" :std::cout<<"YOU LOSE!\n";
    }else{
        return false;
    }
    return true;
}
bool checkTie(char* spaces){
    for(int i=0;i<9;i++){
        if(spaces[i]==' '){
            return false;
        }
    }
    std::cout<<"IT'S A TIE!\n";
    return true;
}

int main(){
    char spaces[9]={' ',' ',' ',' ',' ',' ',' ',' ',' '};
    char player='X';
    char computer='O';
    bool running=true;

    drawBoard(spaces); 

    while(running){
        playerMove(spaces,player);
        drawBoard(spaces); 
        if(checkWinner(spaces,player,computer)){
            break;
        }else if(checkTie(spaces)){
            break;
        }
        computerMove(spaces,computer);
        drawBoard(spaces); 
        if(checkWinner(spaces,player,computer)){
            break;
        }else if(checkTie(spaces)){
            break;
        }
    }
    std::cout<<"Thanks for playing.\n";    
    return 0;
}

//for void player move you can use one more method.

// void playerMove(char* spaces,char player){
//     int number;
//     do{
//         std::cout<<"Enter a spot to place a marker(1-9): ";
//         std::cin>>number;
//         number--;

//         if(spaces[number]==' '){
//             spaces[number]=player;
//             break;
//         }
//     }while(true);
    
// }