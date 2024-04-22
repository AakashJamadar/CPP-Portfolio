// Given two sorted arrays, ‘a’ and ‘b’, of size ‘n’ and ‘m’, respectively, return the union of the arrays.

// The union of two sorted arrays can be defined as an array consisting of the common and the distinct elements of the two arrays.
//  The final array should be sorted in ascending order.

// Note: 'a' and 'b' may contain duplicate elements, but the union array must contain unique elements.

#include <bits/stdc++.h>

std::vector<int> sortedArray(std::vector<int> a, std::vector<int> b) {
  // Write your code here
  std::vector <int> unionn;
  int n1=a.size();
  int n2=b.size();
  int i=0;
  int j=0;
  while(i<n1 && j<n2){  //Overall Time-complexity is O(n1+n2) because no matter what we iterate through both but won't go more than that
      if(a[i]<=b[j] ){  //Space-complexity is O(n1+n2) ,this is the space used by unionn array only for returning not for solving -
          if(unionn.size()==0 || a[i]!=unionn.back()){  //specify it to the interviewer.
              unionn.push_back(a[i]);
          }
          i++;
      }else{
          if(unionn.size()==0 || b[j]!=unionn.back()){
              unionn.push_back(b[j]);
          }
          j++;
        }
    }
while(i<n1){
    if(unionn.size()==0 || a[i]!=unionn.back()){
              unionn.push_back(a[i]);
    }
    i++;
}
while(j<n2){
     if(unionn.size()==0 || b[j]!=unionn.back()){
              unionn.push_back(b[j]);
    }
    j++;
}
return unionn;
}