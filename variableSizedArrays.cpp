//To create a 2D array, you typically allocate an array of pointers first, and then allocate an array of integers for each pointer.


//Question

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

//     create 2D array  (R.H.S creates an array of n pointers,then new returns the address of the first element of 
//     that array (here,first elem is a pointer)) so int** is a pointer to the pointer
//     It is basically a way of creating 2D array
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
//         delete[] a[i];   //deleting a[i] because the values of all subarrays are now in a[i] (line 85)
//     }
//     delete[] a;

//Reason for line 99
// In C++, when you dynamically allocate a 2D array (or a "jagged" array, which is an array of arrays), you 
// must deallocate each subarray individually before deallocating the main array. This is because each subarray 
// is dynamically allocated independently, and simply deleting the main array does not automatically deallocate
//  the memory for each subarray.

//     return 0;
// }



int main() {
    // get length of array 'a' and number of queries
    int n, q;
    cin >> n >> q;

    // create vector of vectors
    vector<vector<int>> a(n);   //'a' is a vector of 'n' empty vectors

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

// vectors don't need memory dealloction?
// ChatGPT
// In C++, std::vector automatically manages its own memory, which means you do not need to manually 
// deallocate the memory it uses. When a std::vector goes out of scope, its destructor is called, and 
// this destructor automatically frees the memory that the vector used. This makes std::vector a safer
//  and more convenient choice for dynamic arrays compared to raw pointers.

// Key Points About std::vector and Memory Management
// Automatic Memory Management:

// When a std::vector is destroyed (for example, when it goes out of scope), its destructor is 
// automatically called, which in turn deallocates any memory that the vector was using.
// You do not need to use delete or delete[] to free memory allocated by a std::vector.
// Resizing:

// When you call resize on a std::vector, it adjusts the size of the vector. If the new size is 
// larger, it will allocate additional memory as needed. If the new size is smaller, it will destroy the excess elements.
// Internally, std::vector handles all the necessary memory allocation and deallocation.
// Scope and Lifetime:

// The memory for a std::vector is automatically released when the vector goes out of scope, such as at the end of a function or block.



//All explanation:

//Stack overflow:
// You know that int* a; defines the variable a as a pointer to an int, right? It's the same with
//  more asterisks, it's add more pointers. So int** a; defines a as a pointer to a pointer to an int.

// And new int*[n] creates an array of n elements, where each element is an int*. Since new returns a
// //  pointer to what's created, a pointer to int* must then be int**.

// If we take the time to "draw" what's happening, then outer = new int*[n] would create something like this:

// +--------------+
// |   outer[0]   | --> ?
// +--------------+
// |   outer[1]   | --> ?
// +--------------+
// |      ...     |
// +--------------+
// | outer[n - 1] | --> ?
// +--------------+
// So you have an array of pointers. The elements in this array are not initialized, they don't
//  point anywhere valid. Which is why the arrows are pointing to the question mark ?.

// Then inside the loop you have the statement

// outer[i] = new int[k];
// It allocates an array of int elements.

// After the loop the drawing then becomes something like this instead:

// +--------------+     +-------------+-------------+-----+-----------------+
// |   outer[0]   | --> | outer[0][0] | outer[0][1] | ... | outer[0][k - 1] |
// +--------------+     +-------------+-------------+-----+-----------------+
// |   outer[1]   | --> | outer[1][0] | outer[1][1] | ... | outer[1][k - 1] |
// +--------------+     +-------------+-------------+-----+-----------------+
// |      ...     |
// +--------------+     +-----------------+-----------------+-----+---------------------+
// | outer[n - 1] | --> | outer[n - 1][0] | outer[n - 1][1] | ... | outer[n - 1][k - 1] |
// +--------------+     +-----------------+-----------------+-----+---------------------+
// I hope this helps you understand what's going on.


//Chat GPT 4-o

// int *array = new int[n]; what is this function actually doing?
// ChatGPT
// The line of code int *array = new int[n]; performs dynamic memory allocation for an array in C++.
//  Let's break down what each part of this statement does in detail:

// Breakdown of int *array = new int[n];
// int *array:

// This declares a pointer named array that can point to an int type.
// Initially, this pointer does not point to any valid memory location.
// new int[n]:

// The new operator dynamically allocates memory on the heap.
// int[n] specifies that the memory allocated should be for an array of n integers.
// This allocation returns a pointer to the first element of the newly allocated array.
// =:

// The assignment operator = assigns the pointer returned by new int[n] to the pointer variable array.
// What Happens in Memory
// The new int[n] part:

// Allocates memory for n consecutive int elements on the heap.
// Returns the address of the first element in this newly allocated array.
// The int *array = part:

// Stores the returned address (which is the address of the first element of the array) in the pointer variable array.
// Visual Representation
// If n = 5, the memory layout might look like this:

// sql
// Copy code
// Heap:
// +----+----+----+----+----+
// | 0  | 1  | 2  | 3  | 4  |   // Memory allocated by `new int[n]`
// +----+----+----+----+----+
//   ^
//   |
// array (holds the address of the first element)
// Practical Example
// Here's a simple example to illustrate the use of this allocation in a complete program:

// cpp
// Copy code
// #include <iostream>

// int main() {
//     int n = 5;
//     int *array = new int[n]; // Dynamically allocates an array of 5 integers

//     // Assign values to the array
//     for (int i = 0; i < n; ++i) {
//         array[i] = i * 10; // Assigns values 0, 10, 20, 30, 40
//     }

//     // Print the array values
//     std::cout << "Array values: ";
//     for (int i = 0; i < n; ++i) {
//         std::cout << array[i] << " ";
//     }
//     std::cout << std::endl;

//     // Deallocate the memory
//     delete[] array; // Frees the dynamically allocated array

//     return 0;
// }
// Summary
// int *array: Declares a pointer to an int.
// new int[n]: Allocates memory for an array of n integers on the heap and returns a pointer to the first element.
// int *array = new int[n];: Combines the declaration and memory allocation, so array now points to the first element of 
// an array of n integers.
// Remember to always use delete[] array; to free the allocated memory when it's no longer needed to avoid memory leaks.



// If  new int[n] allocates dynamic memory for first n integers then what does the new int*[n] do?


// ChatGPT
// Let's break down the differences between new int[n] and new int*[n] in C++.

// new int[n]
// Purpose: Allocates dynamic memory for an array of n integers.
// Result: Returns a pointer to the first element of an array of n integers.
// Example:
// cpp
// Copy code
// int n = 5;
// int* array = new int[n]; // Allocates an array of 5 integers

// // Memory layout
// // array -> [int, int, int, int, int]
// new int*[n]
// Purpose: Allocates dynamic memory for an array of n pointers to int.
// Result: Returns a pointer to the first element of an array of n pointers to int.
// Example:
// cpp
// Copy code
// int n = 5;
// int** pointerArray = new int*[n]; // Allocates an array of 5 pointers to int

// // Memory layout
// // pointerArray -> [int*, int*, int*, int*, int*]
// Detailed Explanation of new int*[n]
// When you use new int*[n], you are creating an array where each element is a pointer to an integer. This is often
//  used when you need to create a 2D array dynamically. Initially, these pointers are uninitialized and do not point 
//  to any valid memory location.

// To use this dynamically allocated array of pointers effectively, you would typically allocate memory for each 
// pointer to point to a separate array of integers.

// Example: Dynamic 2D Array Allocation
// Here’s a complete example showing how to use new int*[n] to create a dynamic 2D array:

// cpp
// Copy code
// #include <iostream>

// int main() {
//     int rows = 3;
//     int cols = 4;

//     // Step 1: Allocate memory for an array of pointers to int
//     int** matrix = new int*[rows];

//     // Step 2: Allocate memory for each row (array of ints)
//     for (int i = 0; i < rows; ++i) {
//         matrix[i] = new int[cols];
//     }

//     // Step 3: Initialize the 2D array
//     for (int i = 0; i < rows; ++i) {
//         for (int j = 0; j < cols; ++j) {
//             matrix[i][j] = i * cols + j; // Just an example initialization
//         }
//     }

//     // Step 4: Print the 2D array
//     std::cout << "2D Array:" << std::endl;
//     for (int i = 0; i < rows; ++i) {
//         for (int j = 0; j < cols; ++j) {
//             std::cout << matrix[i][j] << " ";
//         }
//         std::cout << std::endl;
//     }

//     // Step 5: Deallocate memory
//     for (int i = 0; i < rows; ++i) {
//         delete[] matrix[i]; // Deallocate each row
//     }
//     delete[] matrix; // Deallocate the array of pointers

//     return 0;
// }
// Explanation of the Example
// Step 1: Allocate memory for an array of rows pointers to int.

// cpp
// Copy code
// int** matrix = new int*[rows];
// Step 2: Allocate memory for each row, making each pointer point to an array of cols integers.

// cpp
// Copy code
// for (int i = 0; i < rows; ++i) {
//     matrix[i] = new int[cols];
// }
// Step 3: Initialize the 2D array with some values.

// cpp
// Copy code
// for (int i = 0; i < rows; ++i) {
//     for (int j = 0; j < cols; ++j) {
//         matrix[i][j] = i * cols + j;
//     }
// }
// Step 4: Print the 2D array.

// cpp
// Copy code
// for (int i = 0; i < rows; ++i) {
//     for (int j = 0; j < cols; ++j) {
//         std::cout << matrix[i][j] << " ";
//     }
//     std::cout << std::endl;
// }
// Step 5: Deallocate the memory in the reverse order of allocation to avoid memory leaks.

// cpp
// Copy code
// for (int i = 0; i < rows; ++i) {
//     delete[] matrix[i]; // Deallocate each row
// }
// delete[] matrix; // Deallocate the array of pointers
// Summary
// new int[n]: Allocates an array of n integers.
// new int*[n]: Allocates an array of n pointers to integers.
// To create a 2D array, you typically allocate an array of pointers first, and then allocate an array of integers for each pointer.