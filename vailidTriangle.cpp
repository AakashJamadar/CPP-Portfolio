// You are given 3 sticks of length a,b,c. The task is to check if it is possible to have a triangle of positive 
// area with these angles.If it is possible print “YES” else print “NO”.

class Solution {
  public:
    string isPossible(int a, int b, int c) {
        // code here
        if(a+b<=c || b+c<=a || c+a<=b){
            return "NO";
        }else{
            return "YES";
        }
    }
};