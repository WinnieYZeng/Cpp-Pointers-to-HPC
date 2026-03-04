# C++ Pointers and Memory Management Mastery

This repository records my learning journey of C++ pointers, from basic syntax to advanced memory management, aimed at preparing for high-performance computing (ROCm/HIP).

## 🚀 Learning Roadmap

### Day 1: Pointer Fundamentals
- **Concepts**: Addressing (`&`), Dereferencing (`*`), Pointer Arithmetic.
- **Skills**: Navigating arrays using offsets and returning memory addresses from functions.
- **Exercises**:
  - `ex1_stats.cpp`: Calculate array sum and average using pointers.
  - `ex2_find_max.cpp`: Find the memory address of the maximum value.
  - `ex3_zero_filter.cpp`: Modify array elements based on a threshold.

### Day 2: Dynamic Memory & Two-Pointers Technique
- **Concepts**: Heap allocation (`new`/`delete`), Double Pointers (`**`), Two-pointer algorithm.
- **Algorithms**: Implemented the "Fast & Slow Pointer" technique (Stream Compaction).
- **LeetCode Challenges**:
  - `LC 27`: Remove Element (In-place array manipulation).
  - `LC 283`: Move Zeroes (Stream compaction logic).
- **Advanced**: Understanding `hipMalloc` logic through double pointers.

### Day 3: Dynamic Memory & Double Pointers
- **Concepts**: Heap allocation (`new`/`delete`), Pointer-to-Pointer (`**`).
- **Advanced**: 
  - Simulating `hipMalloc` logic using double pointers to modify caller-scope addresses.
  - Implementing dynamic 2D arrays (foundational for matrix buffers).
- **Goal**: Preparing for GPU device memory allocation patterns.

## 🛠️ Environment & Build
- **Language**: C++11 or higher
- **Compiler**: G++ / Clang
- **Build**: 
  ```bash
  g++ <filename>.cpp -o <output_name>
