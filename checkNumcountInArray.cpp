#include <iostream> 

int main(){
    int n;
    std::cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        std::cin>>arr[i];
    }

    //precompute
    int hash[13]={0};  //13 because max element in the array was 12. If you declare array globally,no need to set it as 0 as it's default value is 0 anyways
    for(int i=0;i<n;i++){
        hash[arr[i]]+=1;
    }

    int q;
    std::cin>>q;
    int num;
    while(q--){
        std::cin>>num;
        //fetch 
        std::cout<<hash[num]<<std::endl;
    }
    
    return 0;
}

