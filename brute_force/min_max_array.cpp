//
//  min_max_array.cpp
//
//  Finding min and max element in an array using brute force approach
//
//  Created by Kiruthika Sekar on 01/06/20.
//

#include <iostream>
using namespace std;

// Function declaration
int get_min(int A[], int size);
int get_max(int A[], int size);

/**
 *Finds the min element in the given Array A.
 *
 * @param A Array which contains the elements of which min is to be found.
 * @param size  Size of the Array A.
 * @return Minimum element in the array
 */
// Function Definition
int get_min(int A[], int size){
    // initialize min to integer maximum value
    int min = INT_MAX;
    //compare all the elements one after the other in the array and find the min element
    for(int i=0; i<size; i++)
        if(A[i] < min)
            min =A[i];
    // return min
    return min;
}

/**
 *Finds the max element in the given Array A.
 *
 * @param A Array which contains the elements of which max is to be found.
 * @param size  Size of the Array A.
 * @return Maximum element in the array
 */
// Function Definition
int get_max(int A[], int size){
    // initialize max to integer minimum value
    int max = INT_MIN;
    //compare all the elements one after the other in the array and find the max element
    for(int i=0; i<size; i++)
        if(A[i] > max)
            max =A[i];
    // return max
    return max;
}

// Main Function which acts as a driver to initialize Array call get_min() and get_max() functions
int main(){
    // initialize the array elements
    int A[] = {70, 50, 80, 140, 12, 14};
    // get the size of the array
    int size = sizeof(A)/sizeof(A[0]);
    // get min element in the array
    int min = get_min(A, size);
    // get max element in the array
    int max = get_max(A, size);
    // print min element found
    cout << "Min: " << min << endl;
    // print max element found
    cout << "Max: " << max << endl;
    // return exit status
    return 0;
}
