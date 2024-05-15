#include <iostream>
#include <iomanip>

void showBalance(double balance){
    std::cout<<"Your balance is:$ "<<std::setprecision(2)<<std::fixed<<balance<<'\n';
}

double depositMoney(double balance){
    double amount;
    std::cout<<"enter the amount to be deposited: \n";
    std::cin>>amount;
    if(amount<0){
        std::cout<<"That's not a valid amount\n";
        return 0;
    }
    return amount;
}

double withdrawMoney(double balance){
    double amount;
    std::cout<<"Enter the amount to be withdrawn: \n";
    std::cin>>amount;
    if(amount>balance){
        std::cout<<"Insufficient funds\n";
        return 0;
    }else if(amount<0){
        std::cout<<"That's not a valid amount\n";
        return 0;
    }
    return amount;
}

int main(){
    int choice;
    double balance=576.54758;

    do{
        std::cout<<"*************************\n";
        std::cout<<"Enter your choice: \n";
        std::cout<<"1.check balance\n";
        std::cout<<"2.Deposit money\n";
        std::cout<<"3.Withdraw money\n";
        std::cout<<"4.Exit transaction\n";
        std::cin>>choice;
        std::cin.clear();
        fflush(stdin);
        std::cout<<"*************************\n";

    switch(choice){
        case 1:showBalance(balance);
               break;
        case 2:balance+=depositMoney(balance);
               showBalance(balance); 
               break;
        case 3:balance-=withdrawMoney(balance);
               showBalance(balance);
               break;
        case 4:std::cout<<"Thanks for visiting.\n";
               break;
        default:std::cout<<"Invalid response\n";
    }
    }while(choice!=4);

    return 0;
}

