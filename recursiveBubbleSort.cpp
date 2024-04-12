#include <iostream> 

void recursive_bubble_sort(int arr[],int n){

    if(n==0) return;
    for(int i=1; i<=n-1; i++){
        if(arr[i-1]>arr[i]){
            int temp=arr[i];
            arr[i]=arr[i-1];
            arr[i-1]=temp;
        }
    }
    recursive_bubble_sort(arr,n-1);
}

int main(){
    int n;
    std::cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        std::cin>>arr[i];
    }
    recursive_bubble_sort(arr,n);
    for(int i=0;i<n;i++){
        std::cout<<arr[i]<<" ";
    }
    return 0;
}