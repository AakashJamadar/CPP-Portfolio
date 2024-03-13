// You are given an integer 'n'.
// Return 'true' if 'n' is an Armstrong number, and 'false' otherwise.

bool checkArmstrong(int n){
	int count=0;
	int origNum=n;
	int sum=0;
	while(n>0){
		count++;
		n/=10;
	}
	n=origNum;
	while(n>0){
		sum+=pow(n%10,count);
		n/=10;
	}
	return sum==origNum;	
}
