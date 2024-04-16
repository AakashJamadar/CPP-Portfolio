// You have been given an array ‘a’ of ‘n’ non-negative integers.You have to check whether the given array is 
//sorted in the non-decreasing order or not.

// Your task is to return 1 if the given array is sorted. Else, return 0.

int isSorted(int n, vector<int> a) {
    // Write your code here.
    for(int i=1;i<n;i++){
        if(a[i-1]<=a[i]){

        }else{
            return false;
        }
    }
    return true;
}
