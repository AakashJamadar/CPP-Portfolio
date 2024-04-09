#include <iostream>

void selection_sort(int arr[],int n){  //3 sorting methods part-1 =(SBI)
    for(int i=0;i<=n-2;i++){
        int mini=i;
        for(int j=i;j<=n-1;j++){
            if (arr[j]<arr[mini]) mini=j;
        }
        int temp=arr[i];
        arr[i]=arr[mini];
        arr[mini]=temp;
    }
}

int main(){
    int n;
    std::cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        std::cin>>arr[i];
    }
    selection_sort(arr,n);
    for(int i=0;i<n;i++){
        std::cout<<arr[i]<<" ";
    }
    return 0;
}

//Time complexity O(N^2) in all cases(best,average,worst)