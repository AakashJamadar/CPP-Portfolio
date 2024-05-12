#include <iostream>

int main(){
    // bool sunny=false;
    // if(!sunny){
    //     std::cout<<"it is sunny outside";
    // }else{
    //     std::cout<<"it is cloudy outside";
    // }
    int num;
    char arr[5]={' ',' ',' ',' ',' '};
    do{
        std::cout<<"Enter a number from 1 to 5: ";
        std::cin>>num;
        num--;
        std::cout<<arr[num];  //didn't cause any problem even though num was 100 ,it just executed the loop again
        if(arr[num]==' '){
            arr[num]='a';
            break;
        }
        std::cout<<arr[num];
    }while(num<0 || num>4);
    std::cout<<arr[4];
    return 0;
}
