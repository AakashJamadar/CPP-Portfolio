#include <iostream> 
#include <vector>

void leftRotateArrayByK(int arr[],int n,int k){
    k=k%n;
    int temp[k];
    for(int i=0;i<k;i++){
        temp[i]=arr[i];
    }
    for(int i=k;i<n;i++){
        arr[i-k]=arr[i];
    }
    for (int i=n-k; i < n; i++) {
    arr[i] = temp[i-(n-k)];  //or create a variable j after 2nd for loop, before 3rd for loop and arr[i]=temp[j]; j++; also works.
    }
}

int main(){
    int n;
    std::cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        std::cin>>arr[i];
    }
    leftRotateArrayByK(arr,n,3);
    for(int i=0;i<n;i++){
        std::cout<<arr[i]<<" ";
    }
    return 0;
}