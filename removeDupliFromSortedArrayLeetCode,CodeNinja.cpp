// You are given a sorted integer array 'arr' of size 'n'.

// You need to remove the duplicates from the array such that each element appears only once.

// Return the length of this new array.

int removeDuplicates(vector<int> &arr, int n) {
	// Write your code here.
	int i=0;
	for(int j=1;j<n;j++){
		if(arr[j]!=arr[i]){
			arr[i+1]=arr[j];
			i++;
		}
	}
	return i+1;
}

// leetcode

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
     int i=0;   
     for(int j=1;j<nums.size();j++){
        if(nums[j]!=nums[i]){
            nums[i+1]=nums[j];
            i++;
        }
     }
     return i+1;
    }
};