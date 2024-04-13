//You are given an integer array 'arr' of size 'N'.
// You must sort this array using 'Insertion Sort' recursively.

void insertionSort(int arr[], int n)
{
if(n<=1) return;
insertionSort(arr,n-1);
for(int j=n-1;j>0;j--){
    if(arr[j-1]>arr[j]){
        int temp=arr[j-1];
        arr[j-1]=arr[j];
        arr[j]=temp;
    }else{
        break;
    }
}
}