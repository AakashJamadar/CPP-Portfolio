// You are given the starting 'l' and the ending 'r' positions of the array 'ARR'.

// You must sort the elements between 'l' and 'r'.

//Code 360 Coding Ninjas issue:They asked to pass array into the function,but they passes both array and vector in different test cases
//So,wrote the code for both Array and a Vector

#include <bits/stdc++.h>

//If Array is passed into the function

void merge(int arr[],int l,int mid,int r){
    std::vector <int> temp;
    int left=l,right=mid+1;
    while(left<=mid && right<=r){
        if(arr[left]<=arr[right]){
            temp.push_back(arr[left]);
            left++;
        }else{
            temp.push_back(arr[right]);
            right++;
        }
    }
    while(left<=mid){
         temp.push_back(arr[left]);
         left++;
    }
    while(right<=r){
        temp.push_back(arr[right]);
        right++;
    }
    for(int i=l;i<=r;i++){
        arr[i]=temp[i-l];
    }
}
void mergeSort(int arr[], int l, int r) {
    if (l>=r) return;
    int mid=(l+r)/2;
    mergeSort(arr,l,mid);
    mergeSort(arr,mid+1,r);
    merge(arr,l,mid,r);
}

// If Vector is passed into the function

void merge(std::vector <int> &arr,int l,int mid,int r){
    std::vector <int> temp;
    int left=l,right=mid+1;
    while(left<=mid && right<=r){
        if(arr[left]<=arr[right]){
            temp.push_back(arr[left]);
            left++;
        }else{
            temp.push_back(arr[right]);
            right++;
        }
    }
    while(left<=mid){
         temp.push_back(arr[left]);
         left++;
    }
    while(right<=r){
        temp.push_back(arr[right]);
        right++;
    }
    for(int i=l;i<=r;i++){
        arr[i]=temp[i-l];
    }
}
void mergeSort(std::vector <int> &arr, int l, int r) {
    if (l>=r) return;
    int mid=(l+r)/2;
    mergeSort(arr,l,mid);
    mergeSort(arr,mid+1,r);
    merge(arr,l,mid,r);
}