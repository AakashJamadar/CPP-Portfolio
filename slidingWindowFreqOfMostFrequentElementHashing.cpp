// The frequency of an element is the number of times it occurs in an array.

// You are given an integer array nums and an integer k. In one operation, you can choose an index of nums and increment the element at that index by 1.

// Return the maximum possible frequency of an element after performing at most k operations.

class Solution {
public:
    int maxFrequency(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end());
        int l=0,res=0;
        long total=0;
       for(int r=0;r<nums.size();++r){
            total+=nums[r];
            while((long)nums[r]*(r-l+1)-total>k){
                total-=nums[l];
                l++;
            }
            res=max(res,(r-l+1));
        }
        return res;
    }
};