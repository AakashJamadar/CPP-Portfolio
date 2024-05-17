#include <iostream>

int main(){
    std::string foods[5];
    int size=sizeof(foods)/sizeof(foods[0]);
    std::string temp;  //using this so that the q used for quit doesn't get dispalyed
    
    for(int i=0;i<size;i++){
    std::cout<<"Enter q to quit or enter a food you like #"<<i+1<<": ";
    std::getline(std::cin,temp);
    if(temp =="q"){
        break;
    }else{
        foods[i]=temp;
    }
    }
    std::cout<<"The foods you like:\n";

    //USING REGULAR FOR LOOP TO AVOID EMPTY SPACES OF ARRAY GETTING PRINTED
    for(int i=0; !foods[i].empty();i++){  
        std::cout<<foods[i]<<'\n';
    }
    return 0;
}