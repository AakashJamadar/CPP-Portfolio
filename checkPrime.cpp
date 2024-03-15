// A prime number is a positive integer that is divisible by exactly 2 integers, 1 and the number itself.
// You are given a number 'n'.
// Find out whether 'n' is prime or not.

bool isPrime(int n)
{
	int count=0;
	for(int i=1; i*i<=n; i++){
		if(n%i==0){
			count++;
			if(n/i!=i) count++;	
		}
	}
	if(count==2) return true;
	return false;
}
