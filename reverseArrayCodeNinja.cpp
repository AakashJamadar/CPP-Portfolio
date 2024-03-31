//  Given an array 'arr' of size 'n'.
// Return an array with all the elements placed in reverse order.

 int i=0;
 vector<int> reverseArray(int n, vector<int> &nums)
{
    if(i>=n/2) return {};
    swap(nums[i],nums[n-i-1]);
    i++;
    reverseArray(n,nums);
    return nums;
}
