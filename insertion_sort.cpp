#include <iostream>

void insertion_sort(int arr[],int n){
    for(int i=1;i<=n-1;i++){
        int j=i;
        while(j>0 && arr[j-1]>arr[j]){
            int temp=arr[j-1];
            arr[j-1]=arr[j];
            arr[j]=temp;
            j--;
            std::cout<<"runs" <<" ";
        }
    }
}

void insertionSort(int arr[], int n)

{

    for(int i=1; i<n; i++){
        for(int j=i; j>0; j--){
            if( arr[j-1] > arr[j]){
              int temp = arr[j-1];
                arr[j-1] = arr[j];
                arr[j] = temp;
            }else
                break;
        }
    }
}

void insertionSort(int arr[], int n)

{

    for(int i=1; i<n; i++){
        for(int j=i-1; j>=0; j--){
            if( arr[j] > arr[j+1]){
              int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }else
                break;
        }
    }
}

int main(){
    int n;
    std::cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        std::cin>>arr[i];
    }
    insertion_sort(arr,n);
    for(int i=0;i<n;i++){
        std::cout<<arr[i];
    }
    return 0;
}

//Time complexity;O(N^2) for average and worst case,,O(N) for best case as it goes inside while loop only if [j-1]>[j];