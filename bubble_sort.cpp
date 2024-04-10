#include <iostream>

void bubble_sort(int arr[],int n){
    for(int i=n-1;i>=1;i--){
        int swap=0;
        for(int j=0;j<=i-1;j++){  //i-1 because arr[j+1] will give runtime error after reaching array's end.
            if(arr[j]>arr[j+1]){
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
                swap=1;
            } 
        }
        if(swap==0) break;
        std::cout<<"runs ";
    }
}

int main(){
    int n;
    std::cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        std::cin>>arr[i];
    }
    bubble_sort(arr,n);
    for(int i=0;i<n;i++){
        std::cout<<arr[i];
    }
    return 0;
}

//Time complexity-O(n^2) for average and worst case);O(N) for best case(important) best case is achieved 
//by breaking loop if no swaps happen in the first loop run