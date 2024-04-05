//Given an integer ‘n’, return first n Fibonacci numbers using a generator function.

vector<int> generateFibonacciNumbers(int n) {
        vector<int> fibo{0,1};
       if(n<=1) fibo.pop_back();
        for(int i=2; i<n; i++){
            int next=fibo[i-1]+fibo[i-2];
            fibo.push_back(next);
        }
        return fibo;
}