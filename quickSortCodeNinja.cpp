// Given the 'start' and the 'end'' positions of the array 'input'. Your task is to sort the elements between 'start' and 'end' using quick sort.
// Note :
// Make changes in the input array itself.

/*
	The function is called with the parameters:
	quickSort(input, 0, size - 1);

*/

int partitionArray(int input[], int start, int end) {
	// Write your code here
	int pivot=input[start];
	int i=start;
	int j=end;
	while(i<j){   //adding this to ensure i and j won't swap values after crossing each other,which won't yield anything
		while(input[i]<=pivot && i<=end-1) i++;  // we have arr[i],if i crosses high, we get runtime error
		while(input[j]>pivot && j>=start+1) j--;
		if(i<j){                 //sometimes when i becomes > j and ,swapping becomes useless as we end up swapping greater elements to left of pivot and vice versa
			int temp=input[i];
			input[i]=input[j];
			input[j]=temp;
		}
		
	}
	int temp2=input[j];
	input[j]=input[start];
	input[start]=temp2;
	 return j;
}

void quickSort(int input[], int start, int end) {
	/*
		Don't write main().
		Don't read input, it is passed as function argument.
		Change in the given array itself.
		Taking input and printing output is handled automatically.
	*/
	if(start<end){
		int pIndex=partitionArray(input,start,end);
	    quickSort(input,start,pIndex-1);
		quickSort(input,pIndex+1,end);
	}
	
}