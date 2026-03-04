#include <iostream>
using namespace std;

/**
 * Exercise 3: In-place Block Swap
 * @param arr    Pointer to the start of the array
 * @param length Total number of elements in the array
 */
void block_swap(int* arr, int length) {
    int half = length / 2;
    int* ptr_1 = arr;             // Points to the start of the 1st half
    int* ptr_2 = arr + half;      // Points to the start of the 2nd half

    for (int i = 0; i < half; i++) {
        // Traditional 3-step swap using a temporary variable
        int temp = *(ptr_1 + i);
        *(ptr_1 + i) = *(ptr_2 + i);
        *(ptr_2 + i) = temp;
    }
}

int main() {
    int data[] = {1, 2, 3, 10, 20, 30};
    
    // Calculate length: Total size divided by size of one element
    int length = sizeof(data) / sizeof(data[0]);
    
    cout << "--- Exercise 3: Block Swap Challenge ---" << endl;
    cout << "Array Length: " << length << endl;

    // Print before swap
    cout << "Before swap: ";
    for (int x : data) cout << x << " "; 
    cout << endl;

    // Execute the swap logic
    block_swap(data, length);

    // Print after swap
    cout << "After swap:  ";
    for (int x : data) cout << x << " "; 
    cout << endl;

    return 0;
}