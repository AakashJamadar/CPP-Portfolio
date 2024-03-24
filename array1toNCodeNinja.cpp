// You are given an integer ‘n’.
// Your task is to return an array containing integers from 1 to ‘n’ (in increasing order) without using loops.



vector<int> printNos(int x) {
    vector<int> vec;
    if(x<1) return {};
    vec=printNos(x-1);
    vec.emplace_back(x);
    return vec;
}

//Method-2(easy method)  We should print numbers, not array.

vector<int> printNos(int x) {
    if(x<1) return {};
    printNos(x-1);
    cout<<x<<" ";
    return {};
}

