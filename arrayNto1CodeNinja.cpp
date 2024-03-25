// You are given an integer ‘n’.
// Your task is to return an array containing integers from ‘n’ to ‘1’ (in decreasing order) without using loops.

vector<int> printNos(int x) {
    if(x<1) return {}; 
    cout<<x<<" ";
    return printNos(x-1);
}