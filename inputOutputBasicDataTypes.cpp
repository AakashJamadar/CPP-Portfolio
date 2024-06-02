// Note: You can also use cin and cout instead of scanf and printf; however, if you are taking a 
// million numbers as input and printing a million lines, it is faster to use scanf and printf.

// Input Format

// Input consists of the following space-separated values: int, long, char, float, and double, respectively.

// Output Format

// Print each element on a new line in the same order it was received as input. Note that the floating point 
// value should be correct up to 3 decimal places and the double to 9 decimal places.

// Sample Input

// 3 12345678912345 a 334.23 14049.30493


// Sample Output

// 3
// 12345678912345
// a
// 334.230
// 14049.304930000

#include <iostream>
#include <cstdio>
# include <iomanip>
using namespace std;

int main() {
    // Complete the code.
    int num;
    long num1;
    char ch;
    float f;
    double lf; 
    // scanf("%d %ld %c %f %lf" , &num,&num1,&ch,&f,&lf);
    // printf("%d\n%ld\n%c\n%.3f\n%.9lf\n" , num,num1,ch,f,lf);
    
    cin>>num>>num1>>ch>>f>>lf;
    cout<<num<<'\n'<<num1<<endl<<ch<<'\n';
    cout<<setprecision(3)<<fixed<<f<<'\n';   //use std for both set precision and fixed
    cout<<setprecision(9)<<fixed<<lf;
}
