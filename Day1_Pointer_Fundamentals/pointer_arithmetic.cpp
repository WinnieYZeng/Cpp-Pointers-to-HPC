#include <iostream>
using namespace std;

/**
 * Exercise 1: Exploring Pointer Arithmetic
 * Goal: Understand the relationship between pointer offsets and memory addresses.
 */
void pointer_challenge() {
    // Initialize a double array (each double typically occupies 8 bytes)
    double data[] = {1.1, 2.2, 3.3, 4.4, 5.5};
    double* base_ptr = data;

    std::cout << "--- Exercise 1: Pointer Arithmetic ---" << std::endl;

    // Task 1: Accessing specific elements using pointer offsets
    // *(base_ptr + n) dereferences the address to get the value
    std::cout << "Third element (value): " << *(base_ptr + 2) << std::endl;
    std::cout << "Fifth element (value): " << *(base_ptr + 4) << std::endl;

    std::cout << "\nMemory Layout Exploration:" << std::endl;
    
    // Task 2: Printing addresses and values
    for(int i = 0; i < 5; i++) {
        // (base_ptr + i) gives the memory address
        // *(base_ptr + i) gives the value stored at that address
        std::cout << "Index " << i 
                  << " | Address: " << (base_ptr + i) 
                  << " | Value: " << *(base_ptr + i) << std::endl;
    }
    
    std::cout << "\nNote: Notice how each address increases by 8 bytes (for double)." << std::endl;
    std::cout << "---------------------------------------\n" << std::endl;
}

int main() {
    pointer_challenge();
    return 0;
}