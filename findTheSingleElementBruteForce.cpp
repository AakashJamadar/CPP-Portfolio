// You are given a sorted array 'arr' of positive integers of size 'n'.

// It contains each number exactly twice except for one number, which occurs exactly once.

// Find the number that occurs exactly once.

#include<vector>

int getSingleElement(vector<int> &arr){
	// Write your code here.	
	int n=arr.size();
	for(int i=0;i<n;i++){             //Space-complexity is O(1)
		int num=arr[i];               //But Time-complexity is O(n^2)
		int count=0;            
		for(int j=0;j<n;j++){
			if(arr[j]==num) count++;
		}
		if(count==1) return num;
	}
}