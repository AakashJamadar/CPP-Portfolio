// You are given two integers 'n', and 'm'.
// Calculate 'gcd(n,m)', without using library functions.

int calcGCD(int n, int m){
    while(n>0 && m>0){
        if(n>m) n=n%m;
        else m=m%n;
    }
    if(n==0) return m;
    return n;
}