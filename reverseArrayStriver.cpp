#include <iostream>
#include <algorithm>

int rev(int i,int arr[],int n){
    if(i>=n/2) return 0;
    std::swap(arr[i],arr[n-i-1]);
    return rev(i+1,arr,n); 
}

int main(){
    int n;
    std::cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        std::cin>>arr[i];
    }
    rev(0,arr,n);
    for(int i=0;i<n;i++){
        std::cout<<arr[i];
    }
}