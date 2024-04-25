// Given an array nums containing n distinct numbers in the range [0, n], 
// return the only number in the range that is missing from the array.

// Brute-Force

class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n=nums.size();
        int ans=-1;
        for(int i=0;i<=n;i++){
            int flag=0;
            for(int j=0;j<n;j++){  //Time-complexity O(n^2) but its kind of hypothetical,because we never go to arr[j-1] everytime 
                if(nums[j]==i){    //as we find elements early
                    flag=1;        //Space-complexity O(1) as we never used extra space 
                    break;
                }
            }
            if(flag==0){
                 ans=i;
                 break;
            }
        }
        return ans;
    }
};

//Better solution

class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n=nums.size();
        int ans=0;
        vector <int> hash(n+1,0);
        for(int i=0;i<n;i++){  //Time-complexity O(2n)
            hash[nums[i]]++;   //Space-complexity O(n) as we used hash array
        }
        for(int i=0;i<=n;i++){
            if(hash[i]==0){
               ans=i;  
               break;
            }    
        }
        return ans;
    }
};