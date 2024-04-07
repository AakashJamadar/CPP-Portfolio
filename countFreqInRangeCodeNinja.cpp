// You are given an array 'arr' of length 'n' containing integers within the range '1' to 'x'.

// Your task is to count the frequency of all elements from 1 to n.

// Note:
// You do not need to print anything. Return a frequency array as an array in the function such that index 0 represents the frequency of 1, index 1 represents the frequency of 2, and so on.
// Example:
// Input: ‘n’ = 6 ‘x’ = 9 ‘arr’ = [1, 3, 1, 9, 2, 7]    
// Output: [2, 1, 1, 0, 0, 0]

vector<int> countFrequency(int n, int x, vector<int> &nums){
    vector<int> frequency(n,0);  //n because they asked to count the frequency of all elements from 1 t n,,frequency(n) does the same work as (n,0)
    for(int i=0;i<n;i++){
        if(nums[i]<=n) frequency[nums[i]-1]++;  
    }
    return frequency;
}