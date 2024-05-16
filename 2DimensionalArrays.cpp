#include <iostream>

int main(){
    std::string foods[][3]={
        {"water","juice","milk"},
        {"ghee","ice cream","soup"},
        {"kabab","egg rice","egg masala"}
    };

    // std::cout<<foods[2][2]<<'\n';
    // std::cout<<foods[0]<<'\n'; //prints address of first element of the 1st row,,if it was 2 it prints address of the first element of 3rd row

    int rows=sizeof(foods)/sizeof(foods[0]);
    int columns=sizeof(foods[0])/sizeof(foods[0][0]);   //beacause foods[0] defines row so same method as row cannot be used

    //To iterate over the 2-d array
    for(int i=0;i<rows;i++){
        for(int j=0;j<columns;j++){
            std::cout<<foods[i][j]<<" ";
        }
        std::cout<<'\n';
    }
    return 0;
}