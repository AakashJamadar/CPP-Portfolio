//Leet-Code

// Given a non-empty array of integers nums, every element appears twice except for one. Find that single one.

// You must implement a solution with a linear runtime complexity and use only constant extra space.

//Array isn't sorted here

class Solution {
public:
    int singleNumber(vector<int>& nums) {	
	int n=nums.size();
    int xorr=0;
    for(int i=0;i<n;i++){
        xorr^=nums[i];
    }
    return xorr;
    }
};

//Coding-ninjas

// You are given a sorted array 'arr' of positive integers of size 'n'.

// It contains each number exactly twice except for one number, which occurs exactly once.

// Find the number that occurs exactly once.

//Array is sorted here,so they are expecting a better solution

#include<vector>
#include <map>
int getSingleElement(vector<int> &arr){  
	// Write your code here.	
	int n=arr.size();
	int xorr=0;
	for(int i=0;i<n;i++){
		xorr^=arr[i];
	}
	return xorr;
}

//for coding ninjas question,we can find easy solution

#include<vector>

int getSingleElement(vector<int> &arr){
	// Write your code here.	
	int n=arr.size();
	int ans=-1;
	for(int i=0;i<n;i+=2){
		if(i+1<n && arr[i]!=arr[i+1]){
			ans=arr[i];
			break;
		}else{
			ans=arr[n-1];
		}
	}
	return ans;
}

//little changes

#include<vector>

int getSingleElement(vector<int> &arr){
	// Write your code here.	
	int n=arr.size();
	int ans=-1;
	if(n==1) return arr[0];
	for(int i=0;i<n-1;i+=2){
		if(arr[i]!=arr[i+1]){
			ans=arr[i];
			break;
		}else{
			ans=arr[n-1];
		}
	}
	return ans;
}

