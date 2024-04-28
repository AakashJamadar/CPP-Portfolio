// The Road Department is planning to make some new traffic regulations. But to 
// make the regulations they need to analyze the current situation of the traffic.

// The traffic can be analyzed from an array 'VEHICLE' of length 'N' , which 
// consists of ‘0’ if there is no vehicle at that point and ‘1’ if there is a vehicle at the point.

// Unfortunately the array ‘VEHICLE’ got corrupted as at most 'M' '1' got flipped to ‘0’.

// Traffic jam is defined as the length of consecutive vehicles on the road.

// The Road Department wants to know the worst possible scenario for the traffic jam.
//  Return the maximum possible length of the consecutive vehicles.

int traffic(int n, int m, vector<int> vehicle) {
	// Write your code here.
	int l=0,r=0,zeros=0,maxOnes=0;
	while(r<n){
		if(vehicle[r]==0){
			zeros++;
		}
		while(zeros>m){           //Time-complexuty is O(n) because inner while loop doesn't run throughout,it just runs once or twice
			if(vehicle[l]==0) zeros--;  //it can be reeplaced by if too
			l++;                        //Space-complexity is O(1) 
		}
		maxOnes=max(maxOnes,(r-l+1));
		r++;
	}
	return maxOnes;
}


int traffic(int n, int m, vector<int> vehicle) {
	// Write your code here.
	int l=0,r=0,zeros=0,maxOnes=0;
	while(r<n){
		if(vehicle[r]==0){
			zeros++;
		}
		if(zeros>m){                            //while replaced by if 
			if(vehicle[l]==0) zeros--;          //Time-complexity is O(n) 
			l++;
		}
		maxOnes=max(maxOnes,(r-l+1));
		r++;
	}
	return maxOnes;
}
