// You have been given an array ‘a’ of ‘n’ unique non-negative integers.

// Find the second largest and second smallest element from the array.

// Return the two elements (second largest and second smallest) as another array of size 2.

int secondLargest(int n,vector<int>& a){
    int largest=a[0];  
    int second_largest=-1;   //keep it as INT_MIN if array has negative integers too
    for(int i=1;i<n;i++){
        if (a[i]>largest ){
            second_largest=largest;
            largest=a[i];
        }else if(a[i]>second_largest){   //else if (a[i] > second_largest && a[i] != largest),,to handle duplicates
                second_largest=a[i];
        }
    }
    return second_largest;
}

int secondSmallest(int n,vector<int>& a){
    int smallest=a[0];
    int second_smallest=INT_MAX;
    for(int i=1;i<n;i++){
        if(a[i]<smallest){
            second_smallest=smallest;
            smallest=a[i];
        }else if(a[i]<second_smallest){  //else if (a[i] < second_smallest && a[i] != smallest),, to handle duplicates
                second_smallest=a[i];
        }
    }
    return second_smallest;
}

vector<int> getSecondOrderElements(int n, vector<int> a) {
    // Write your code here.
    int sLargest=secondLargest(n,a);
    int sSmallest=secondSmallest(n,a);
    return { sLargest,sSmallest};
}

