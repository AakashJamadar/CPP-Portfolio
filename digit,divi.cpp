// You are given a number ’n’.
// Find the number of digits of ‘n’ that evenly divide ‘n’.
// Note:A digit evenly divides ‘n’ if it leaves no remainder when dividing ‘n’.

int countDigits(int n){
	int num=n;
    int count=0;
    while(n!=0){
        int digit=n%10;
        if(digit!=0 && num%digit==0){
            count++;
        } 
        n/=10;     
    }
    return count;
}

