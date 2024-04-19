// Given an array 'arr' of 'n' non-negative integers, your task is to move all 
// the zeros to the end of the array while keeping the non-zero elements at the 
// start of the array in their original order. Return the modified array.

vector<int> moveZeros(int n, vector<int> a) {
    // Write your code here.
    vector <int> arr;
    for(int i=0;i<n;i++){
        if(a[i]!=0) arr.push_back(a[i]);
    }
    for(int i=0;i<arr.size();i++){
        a[i]=arr[i];
    }
    for(int i=arr.size();i<n;i++){
        a[i]=0;
    }
    return a;
}