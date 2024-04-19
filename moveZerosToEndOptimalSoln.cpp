// Given an array 'arr' of 'n' non-negative integers, your task is to move all 
// the zeros to the end of the array while keeping the non-zero elements at the 
// start of the array in their original order. Return the modified array.

vector<int> moveZeros(int n, vector<int> a) {
    // Write your code here.
    int j=0;
   for(int i=0;i<n;i++){
    if(a[i]!=0){
        std::swap(a[i],a[j++]); //swaps arr[i],arr[j] then increments j by 1  ,,if arr[++j] is used keep initial value of j as -1.
    }
} 
    return a;
}

//Method-2

vector<int> moveZeros(int n, vector<int> a) {
    // Write your code here.
    int j=-1;
    for(int i=0;i<n;i++){
            if(a[i]==0){
                j=i;
                break;
            }
            
    }
    if (j==-1) return a;

    for(int i=j+1;i<n;i++){
        if(a[i]!=0){
            int temp=a[i];
            a[i]=a[j];
            a[j]=temp;
            j++;
        }
        
    }
    return a;
}

//Same in Leet-Code

class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int n=nums.size();
        int j=-1;
        for(int i=0;i<n;i++){
            if(nums[i]!=0){
                swap(nums[i],nums[++j]);
            }
        }
    }
};