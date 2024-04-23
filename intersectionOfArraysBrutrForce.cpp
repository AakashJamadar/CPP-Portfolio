// You are given two arrays 'A' and 'B' of size 'N' and 'M' respectively. Both these arrays are sorted 
//in non-decreasing order. You have to find the intersection of these two arrays.

// Intersection of two arrays is an array that consists of all the common elements occurring in both arrays.

// Note :
// 1. The length of each array is greater than zero.
// 2. Both the arrays are sorted in non-decreasing order.
// 3. The output should be in the order of elements that occur in the original arrays.
// 4. If there is no intersection present then return an empty array.

#include <bits/stdc++.h> 
vector<int> findArrayIntersection(vector<int> &arr1, int n, vector<int> &arr2, int m)
{
	// Write your code here.
	vector <int> visited(m,0);  //Time limit is exceeding for the submit
	vector <int> ans;
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			if(arr1[i]==arr2[j] && visited[j]==0){
				ans.push_back(arr1[i]);
				visited[j]=1;
				break;
			}
			if(arr1[i]<arr2[j]) break;
		}
	}
	return ans;
}