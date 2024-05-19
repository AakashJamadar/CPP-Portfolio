#include <iostream>
#include <algorithm>

int getDigits(int number){
    return number%10+number/10;
}
int sumEvenDigits(std::string cardNum){
    int sum=0;
    for(int i=cardNum.size()-2; i>=0;i-=2){
        sum+=getDigits((cardNum[i]-'0')*2);
    }
    return sum;
}
int sumOddDigits(std::string cardNum){
    int sum=0;
    for(int i=cardNum.size()-1;i>0;i-=2){
        sum+=cardNum[i]-'0';
    }
    return sum;
}

int main(){
    std::string cardNum;
    std::cout<<"Enter your credit card number: \n";
    std::getline(std::cin,cardNum);
    cardNum.erase(std::remove_if(cardNum.begin(),cardNum.end(),::isspace),cardNum.end());  //to remove white spaces in between the string
    int result=sumEvenDigits(cardNum)+sumOddDigits(cardNum);

    if(result%10==0){
        std::cout<<cardNum<<" is valid";
    }else {
        std::cout<<cardNum<<" is not valid";
    }
    return 0;
}