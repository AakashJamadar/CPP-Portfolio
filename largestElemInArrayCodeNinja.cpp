//Given an array ‘arr’ of size ‘n’ find the largest element in the array.

#include <bits/stdc++.h> 
int largestElement(vector<int> &arr, int n) {
    // Write your code here.
    int largest=arr[0];
    for(int i=1;i<n;i++){
        if(arr[i]>largest) largest=arr[i];
    }
    return largest;
}
