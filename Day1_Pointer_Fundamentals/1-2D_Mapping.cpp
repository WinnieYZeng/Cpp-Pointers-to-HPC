#include <iostream>
using namespace std;

/**
 * Task: 2D coordinates to 1D pointer offset
 * Concept: index = row * num_cols + col
 */

void matrix_indexing_training() {
    int rows = 3;
    int cols = 4;

    //A 1D array representing a 3x4 matrix
    int matrix[] = { 1,  2,  3,  4,
                     5,  6,  7,  8,
                     9, 10, 11, 12 };
    
    int* ptr = matrix;

    //task: print the element at row 2, col 1 (whic is 9)
    // using only pointer arithmetic
    int r = 2, c = 1;

    // using pointer arithmetic: ptr + (row_index * width + col_index)
    int value = *(ptr + (r * cols + c));

    cout << "value at (row 2, col 1): " << value << endl;

    // --- task 2: visualize the flattening --- 
    cout << "\nMemory visualization (Row-Major):" << endl;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            // Calculate the 1D index
            int idx = i * cols + j;
            cout << "Value[" << i << "][" << j << "] (Index " << idx << ") = " 
                 << *(ptr + idx) << " at " << (ptr + idx) << endl;
        }
    }
}

int main() {
    matrix_indexing_training();
    return 0;
}