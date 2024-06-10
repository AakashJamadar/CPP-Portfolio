// Given an array of integers nums and an integer target, return indices of the two numbers such that they add up to target.

// You may assume that each input would have exactly one solution, and you may not use the same element twice.

// You can return the answer in any order.

 

// Example 1:

// Input: nums = [2,7,11,15], target = 9
// Output: [0,1]
// Explanation: Because nums[0] + nums[1] == 9, we return [0, 1].
// Example 2:

// Input: nums = [3,2,4], target = 6
// Output: [1,2]
// Example 3:

// Input: nums = [3,3], target = 6
// Output: [0,1]
 

// Constraints:

// 2 <= nums.length <= 104
// -109 <= nums[i] <= 109
// -109 <= target <= 109
// Only one valid answer exists.

//Brute force

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n=nums.size();
        vector<int> result;
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(nums[i]+nums[j]==target){
                    if(i==j){
                        continue;
                    }
                    result.push_back(i);
                    result.push_back(j);
                    break;
                }
            }
            if(result.size()==2) break;
        }
        return result;
    }
};

//Simplified brute force

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n=nums.size();
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                if(nums[i]+nums[j]==target){
                    return {i,j};
                }
            }
        }
        return {};  //No solution
    }
};

//o(n) solution exact is O(2n)

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n=nums.size();
        unordered_map <int,int> numMap;
        for(int i=0;i<n;i++){
            numMap[nums[i]]=i;
        }

        for(int i=0;i<n;i++){
            int compliment=target-nums[i];
            if(numMap.count(compliment) && numMap[compliment]!=i){
                return {i,numMap[compliment]};
            }
        }
        return {};  //No solution
    }
};

//Optimal solution O(n)

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n=nums.size();
        unordered_map <int,int> numMap;
        
        for(int i=0;i<n;i++){
            int compliment=target-nums[i];
            if(numMap.count(compliment) ){
                return {i,numMap[compliment]};
            }
            numMap[nums[i]]=i;
        }
        return {};  //No solution
    }
};

