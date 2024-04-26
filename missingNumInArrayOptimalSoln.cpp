// Given an array nums containing n distinct numbers in the range [0, n], 
// return the only number in the range that is missing from the array.

//Optimal-1

class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n=nums.size();
        int sum=n*(n+1)/2;
        int sumArr=0;
        for(int i=0;i<n;i++){
            sumArr+=nums[i];
        }
        return sum-sumArr;
    }
};

//Optimal-2(using XOR)

//a^a=0 and a^0=a
//if we do XOR of first N numbers and XOR of all numbers in the given array and do XOR to both, we get the missing number
//but the time-complexity becomes O(2n).we should try for better solution than the sum method

//This solution is better than sum,because if n was 10^5 in sums sum would cross int max making us to use long (here int is enough)
//So,this method is slightly better

class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n=nums.size();
        int xor1=0,xor2=0;
        for(int i=0;i<n;i++){
            xor1^=nums[i];
            xor2^=i+1;
        }
        return xor1^xor2;
    }
};

//If numbers in array were between 1 to n we do as follow

class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n=nums.size();
        int xor1=0,xor2=0;
        for(int i=0;i<n;i++){
            xor1^=nums[i];
            xor2^=i+1;
        }
        xor2^=n;                    //Added line
        return xor1^xor2;
    }
};