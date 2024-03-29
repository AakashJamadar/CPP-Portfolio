// You are given an integer ’n’.
// Your task is to return a sorted array (in increasing order) containing all the factorial numbers which are less than or equal to ‘n’.
// The factorial number is a factorial of a positive integer, like 24 is a factorial number, as it is a factorial of 4.

vector<long long> factorialNumbers(long long n) {
    vector<long long> vec;
    long long fact=1;
    for(long long i=1; fact<=n; i++){
         vec.push_back(fact);
         fact*=i+1;
    }
    return vec;
}