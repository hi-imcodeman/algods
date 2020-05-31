//
//  min_max_array.cpp
//  
//
//  Created by Kiruthika Sekar on 31/05/20.
//

#include <iostream>
using namespace std;

// Function declaration
int get_min(int A[], int icurrent, int size);
int get_max(int A[], int icurrent, int size);

/**
*Finds the min element in the given Array A.
*
* @param A Array which contains the elements of which min is to be found.
* @param icurrent  Index of the current element being compared.
* @param size  Size of the Array A.
* @return Minimum element in the array
*/
// Function Definition
int get_min(int A[], int icurrent, int size){
    // if problem is reduced to the smallest subproblem
    // in this case only two elements left
    // compare and return the min element
    if(icurrent >= size - 2){
        if(A[icurrent] < A[icurrent+1])
            return A[icurrent];
        else
            return A[icurrent+1];
    }
    // if problem is big keep divide it to smaller subproblems
    int min = get_min(A, icurrent+1, size);
    // Merge the results of the subproblems to get the final result
    if(min < A[icurrent])
        return min;
    else
        return A[icurrent];
}

/**
*Finds the min element in the given Array A.
*
* @param A  Array which contains the elements of which max is to be found.
* @param icurrent  Index of the current element being compared.
* @param size  Size of the Array A.
* @return Maximum element in the array
*/
// Function Definition
int get_max(int A[], int icurrent, int size){
    // if problem is reduced to the smallest subproblem
    // in this case only two elements left
    // compare and return the max element
    if(icurrent >= size - 2){
        if(A[icurrent] > A[icurrent+1])
            return A[icurrent];
        else
            return A[icurrent+1];
    }
    // if problem is big keep divide it to smaller subproblems
    int max = get_max(A, icurrent+1, size);
    // Merge the results of the subproblems to get the final result
    if(max > A[icurrent])
        return max;
    else
        return A[icurrent];
}

// Main Function which acts as a driver to initialize Array, variables, call get_min() and get_max() functions
int main(){
    // initialize the array elements
    int A[] = {70, 250, 50, 80, 140, 12, 14};
    // get the size of the array
    int size = sizeof(A)/sizeof(A[0]);
    // get min element in the array
    int min = get_min(A, 0, size);
    // get max element in the array
    int max = get_max(A, 0, size);
    // print min element found
    cout << "Min: " << min << endl;
    // print max element found
    cout << "Max: " << max << endl;
    // return exit status
    return 0;
}
