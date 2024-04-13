#include <iostream>

void recursive_insertion_sort(int arr[],int i,int n){
    if(i>=n) return ;
    int j=i;
    while(j>0 && arr[j-1]>arr[j]){
        int temp=arr[j-1];
        arr[j-1]=arr[j];
        arr[j]=temp;
        j--;
    }
    recursive_insertion_sort(arr,i+1,n);
}

int main(){
    int n;
    std::cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        std::cin>>arr[i];
    }
    recursive_insertion_sort(arr,0,n);
    for(int i=0;i<n;i++){
        std::cout<<arr[i]<<" ";
    }
    return 0;
}