#include <iostream>

int partition(int arr[],int low,int high){
    int pivot=arr[low];
    int i=low,j=high;
    while(i<j){   //adding this to ensure i and j won't swap values after crossing each other,which won't yield anything
        while(arr[i]<pivot && i<=high-1) i++; // we have arr[i],if i crosses high, we get runtime error
        while(arr[j]>=pivot && j>=low+1) j--;
        if(i<j){  //sometimes when i becomes > j and ,swapping becomes useless as we end up swapping greater elements to left of pivot and vice versa
            int temp=arr[i];
            arr[i]=arr[j];
            arr[j]=temp;
        }
    }
    int temp2=arr[low];
    arr[low]=arr[j];
    arr[j]=temp2;
    return j;
}

void quick_sort(int arr[],int low,int high){
    if(low<high){   //dry run arr[3,2,1] to know the use of this base case
        int pIndex=partition(arr,low,high);
        quick_sort(arr,low,pIndex-1);
        quick_sort(arr,pIndex+1,high);
    }
}

int main(){
    int n;
    std::cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        std::cin>>arr[i];
    }
    quick_sort(arr,0,n-1);
    for(int i=0;i<n;i++){
        std::cout<<arr[i]<<" ";
    }
    return 0;
}