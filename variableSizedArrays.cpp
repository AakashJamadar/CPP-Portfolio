// Consider an -element array, , where each index  in the array contains a reference to an array of  
// integers (where the value of  varies from array to array). See the Explanation section below for a diagram.

// Given , you must answer  queries. Each query is in the format i j, where  denotes an index in array 
//  and  denotes an index in the array located at . For each query, find and print the value of element 
//   in the array at location  on a new line.

// Click here to know more about how to create variable sized arrays in C++.

// Input Format

// The first line contains two space-separated integers denoting the respective values of  
// (the number of variable-length arrays) and  (the number of queries).
// Each line  of the  subsequent lines contains a space-separated sequence in 
// the format k a[i]0 a[i]1 … a[i]k-1 describing the -element array located at .
// Each of the  subsequent lines contains two space-separated integers describing 
// the respective values of  (an index in array ) and  (an index in the array referenced by ) for a query.

// Constraints

// All indices in this challenge are zero-based.
// All the given numbers are non negative and are not greater than 
// Output Format

// For each pair of  and  values (i.e., for each query), print a single integer that denotes
//  the element located at index  of the array referenced by . There should be a total of  lines of output.

// Sample Input

// 2 2
// 3 1 5 4
// 5 1 2 8 9 3
// 0 1
// 1 3
// Sample Output

// 5
// 9
// Explanation

// The diagram below depicts our assembled Sample Input:

// variable-length-arrays.png

// We perform the following  queries:

// Find the array located at index , which corresponds to . We must print the value at index  of this array which, as you can see, is .
// Find the array located at index , which corresponds to . We must print the value at index  of this array which, as you can see, is .

#include <iostream>
#include <vector>

using namespace std;

// int main() {
//     // get length of 2D array and number of queries
//     int n, q;
//     cin >> n >> q;

//     // create 2D array
//     int** a = new int*[n]();

//     // fill 2D array with 1D subarrays
//     for (int i = 0; i < n; i++) {
//         // get the length of the 1D array at a[i]
//         int k;
//         cin >> k;

//         // create the 1D subarray with the given length
//         int* i_arr = new int[k]();

//         // fill the subarray with k values
//         for (int j = 0; j < k; j++) {
//             cin >> i_arr[j];
//         }

//         // store the subarray in a
//         a[i] = i_arr;
//     }


//     // run queries on a
//     for (int q_num = 0; q_num < q; q_num++) {
//         // get i, j as the 'query' to get a value from a
//         int i, j;
//         cin >> i >> j;
//         cout << a[i][j] << endl;
//     }

//     // delete 2D array (each subarray must be deleted)
//     for (int i = 0; i < n; i++) {
//         delete[] a[i];
//     }
//     delete[] a;

//     return 0;
// }



int main() {
    // get length of array 'a' and number of queries
    int n, q;
    cin >> n >> q;

    // create vector of vectors
    vector<vector<int>> a(n);

    // fill each 2D vector i with k_i values
    for (int i = 0; i < n; i++) {
        // get the length k of the vector at a[i]
        int k;
        cin >> k;

        // fill the vector with k values
        a[i].resize(k);
        for (int j = 0; j < k; j++) {
            cin >> a[i][j];
        }
    }

    // run queries on a
    for (int q_num = 0; q_num < q; q_num++) {
        // get i, j as the 'query' to get a value from a
        int i, j;
        cin >> i >> j;
        cout << a[i][j] << endl;
    }

    return 0;
}