// You are given a sorted array 'arr' of positive integers of size 'n'.

// It contains each number exactly twice except for one number, which occurs exactly once.

// Find the number that occurs exactly once.

#include<vector>
int getSingleElement(vector<int> &arr){
	// Write your code here.	
	int ans=-1;
	int n=arr.size();
	int maxi=arr[0];
	for(int i=0;i<n;i++){
		maxi=max(maxi,arr[i]);     //Taking too long to execute even though time-complexity is O(3n) and sc is 0(maxi)
	}                              //as hashing cannot be done for large numbers (n was in between 1 to 10^9)
	int hash[maxi+1]={0};          //so we use map data structure with a bigger datatype for key
	for(int i=0;i<n;i++){
		hash[arr[i]]++;
	}
	for(int i=0;i<=n;i++){
		if(hash[arr[i]]==1){
			ans=arr[i];
			break;
		}
	}
	return ans;
}

//Method-2(changes in 3rd loop)

#include<vector>
int getSingleElement(vector<int> &arr){
	// Write your code here.	
	int ans=-1;
	int n=arr.size();
	int maxi=arr[0];
	for(int i=0;i<n;i++){
		maxi=max(maxi,arr[i]);
	}
	int hash[maxi+1]={0};
	for(int i=0;i<n;i++){
		hash[arr[i]]++;
	}
	for(int i=0;i<=maxi;i++){
		if(hash[i]==1){
			ans=i;
			break;
		}
	}
	return ans;
}

//Method-3 and better than hash

#include<vector>
#include <map>
int getSingleElement(vector<int> &arr){
	// Write your code here.	
	int n=arr.size();					//leetcode accepts this but runtime is 35ms
	int ans=-1;
	std::map <long long,int> mpp;  //this solution doesn't pass all test cases=
	for(int i=0;i<n;i++){
		mpp[arr[i]]++;     //this takes o(logm) time,where m is size of the map
	}					//so n times of that is O(nlogm)
	for(auto it:mpp){
		if(it.second==1){
			ans=it.first;
			break;			//this loop takes O((n/2)+1) time as size of map here is (n/2)+1(as we store unique elemets in map)
		}					//array size is always odd as 1 element appears once and rest all twice ,so map size will be (n/2)+1
	}
	return ans;				//total Time-complexity O(nlog((n/2)+1))+O((n/2)+1)
}							//space-complexity O((n/2)+1)

//if we use unordered map instead,we can have time complexity O(n)+O(n) but for unorderd map worst case time goes 
//to O(n) for insertion causing total time complexity to O(n^2)+O(n) that too very rarely during collisions