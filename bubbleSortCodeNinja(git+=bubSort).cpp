// You are given an integer array 'arr' of size 'N'.

// You must sort this array using 'Bubble Sort'.

void bubbleSort(vector<int>& arr, int n) 
{
    for(int i=n-1;i>=1;i--){
        int swap=0;
        for(int j=0;j<=i-1;j++){
            if(arr[j]>arr[j+1]){
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
                swap=1;
            }
        }
        if(swap==0) break;
    }
}