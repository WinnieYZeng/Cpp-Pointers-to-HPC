#include <iostream>
using namespace std;

/**
 * Exercise 2: Manual Memory Copy (Simulating hipMemcpy)
 * @param src   Pointer to the source buffer (Host)
 * @param dest  Pointer to the destination buffer (Device simulation)
 * @param count Number of elements to copy
 */
void manual_copy(int* src, int* dest, int count) {
    std::cout << "--- Exercise 2: Manual Memory Copy ---" << std::endl;

    for (int i = 0; i < count; i++) {
        // Pointer arithmetic to locate specific elements
        int* current_src = src + i;
        int* current_dest = dest + i;

        // Display state before copy
        std::cout << "Copying Index [" << i << "]: " 
                  << "Src Addr: " << current_src << " (Val: " << *current_src << ") -> "
                  << "Dest Addr: " << current_dest << " (Old Val: " << *current_dest << ")";

        // Core logic: Dereference src, read value, and write to dest address
        *current_dest = *current_src;

        // Show result after copy
        std::cout << " | New Dest Val: " << *current_dest << std::endl;
    }
    std::cout << "---------------------------------------\n" << std::endl;
}

int main() {
    const int size = 4;
    int host_data[] = {10, 20, 30, 40};

    // Allocate memory on the Heap to simulate Device Memory
    // In HIP, this would be hipMalloc
    int* device_sim = new int[size];

    // Initialize destination with zeros for clear demonstration
    for(int i = 0; i < size; i++) {
        *(device_sim + i) = 0;
    }

    // Perform the copy
    manual_copy(host_data, device_sim, size);

    // Final Verification
    std::cout << "Final Verification in Main: ";
    for(int i = 0; i < size; i++) {
        std::cout << device_sim[i] << " ";
    }
    std::cout << std::endl;

    // IMPORTANT: Free the allocated memory to prevent memory leaks
    // In HIP, this would be hipFree
    delete[] device_sim;
    device_sim = nullptr; // Safety best practice

    return 0;
}