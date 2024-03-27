// You are given an integer ‘n’.
// Your task is determining the sum of the first ‘n’ natural numbers and returning it.

//RECURSION SOLUTION,,,,But it exceeds time

long long sumFirstN(long long n) {
    if(n<1) return 0;
    return n+sumFirstN(n-1);
}

//Solution to run all 50 cases

long long sumFirstN(long long n) {
    if(n<1) return 0;
    return n*(n+1)/2;
}