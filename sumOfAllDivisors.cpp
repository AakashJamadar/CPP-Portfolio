// You are given an integer ‘n’.
// Function ‘sumOfDivisors(n)’ is defined as the sum of all divisors of ‘n’.
// Find the sum of ‘sumOfDivisors(i)’ for all ‘i’ from 1 to ‘n’.

int sumOfDivisorInRange(int num){
    int divisorSum=0;
    for(int i=1; i*i<=num; i++){
        if(num%i==0){
            divisorSum+=i;
            if(num/i!=i){
                divisorSum+=num/i;
            }
        }
    }   
    return divisorSum;
}
int sumOfAllDivisors(int n){
   int totalSum=0;
   for(int i=1; i<=n; i++){
       totalSum+=sumOfDivisorInRange(i);
   }
   return totalSum;
}

//this is easy solutin but higher time complexity


int sumOfAllDivisors(int n){
    int ans = 0;
    for( int i = 1; i <= n; i++) {
        ans += i * (n/i);
    }
    return ans;     
}