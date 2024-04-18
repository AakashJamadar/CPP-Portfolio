//Given an array 'arr' with 'n' elements, the task is to rotate the array to the left by 'k' steps, where 'k' is non-negative.

vector<int> rotateArray(vector<int>arr, int k) {
    // Write your code here.
  reverse(arr.begin(),arr.begin()+k);  //Time-complexity O(k)
  reverse(arr.begin()+k,arr.end());    //Time-complexity O(n-k)
  reverse(arr.begin(),arr.end());      //Time-complexity O(n)
    return arr;                        //Overall time-complexity O(2n) ,it's equal to O(n),but in interview be specific
}                                      // Space-complexity O(1) as no extra space is used.

vector<int> rotateArray(vector<int>arr, int k) {
    // Write your code here.
    int n=arr.size();
  vector<int> newarr;
  for(int i=k;i<n;i++){
      newarr.push_back(arr[i]);  //Time-complexity is O(n);
  }                              //but Space-complexity is O(n)
  for(int i=0;i<k;i++){
      newarr.push_back(arr[i]);
  }
    return newarr;
}

//Reverse function if interviewer asks

void reverse(int arr[],int start,int end){
    while(start<=end){
        int temp=arr[start];
        arr[start]=arr[end];
        arr[end]=temp;
        start++;
        end--;
    }
}
