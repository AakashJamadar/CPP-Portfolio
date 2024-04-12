#include <iostream> 

void recursive_selection_sort(int arr[],int i,int n){
    if(i>=n) return;
    int mini=i;
    for(int j=i;j<=n-1;j++){
       if(arr[mini]>arr[j]) mini=j; 
    }
    int temp=arr[mini];
    arr[mini]=arr[i];
    arr[i]=temp;
    recursive_selection_sort(arr,i+1,n);
}

int main(){
    int n;
    std::cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        std::cin>>arr[i];
    }
    recursive_selection_sort(arr,0,n);
    for(int i=0;i<n;i++){
        std::cout<<arr[i]<<" ";
    }
    return 0;
}