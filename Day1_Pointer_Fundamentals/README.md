### Day 1: Pointer Fundamentals & Memory Manipulation

This folder contains the core exercises for Day 1, focusing on how pointers bridge the gap between high-level C++ and low-level memory (HPC/GPU) management.

---

#### 📂 Exercise Overview

##### 1. `pointer_arithmetic.cpp` 
- **Goal**: Master pointer stepping and offsets (`ptr + i`).
- **Logic**: Demonstrates how `ptr + i` automatically shifts the address based on the data type size (`sizeof(type)`).
- **HPC Connection**: This is the math behind **Parallel Indexing**. Each GPU thread calculates its unique data offset: `Address = BasePtr + (ThreadID * ElementSize)`.

##### 2. `simulating_hipmemcpy.cpp` 
- **Logic**: A hand-written function using `void*` and `char*` casting to move raw bytes between simulated Host and Device memory.
- **HPC Connection**: Direct emulation of `hipMemcpy(dst, src, size, kind)`. It highlights why `void*` is used for type-agnostic data movement in GPU drivers.

##### 3. `block_swap.cpp`
- **Goal**: Swap two memory blocks using pointers.
- **Logic**: Uses a temporary buffer and pointer stepping to swap the contents of two arrays.
- **HPC Connection**: Simulates **Double Buffering** in GPU computing, where pointers are swapped to prepare the next frame while the current one is being processed.

##### 4. `memory.cpp` 
- **Goal**: Understand memory segments (Stack vs. Heap) and address visualization.
- **Logic**: Prints the hex addresses of variables in different segments: Stack, Heap, and Global.
- **HPC Connection**: The first step to understanding **Memory Hierarchy**. Stack is like GPU registers (fast/small), while Heap is like Global VRAM (large/slower).

---

### 🧠 Key Knowledge Points

- **Pointer as Address**: A pointer stores the **location**, not the value. (`&` vs `*`).
- **Pointer Stepping**: Adding 1 to a pointer moves it by the size of the underlying type, not 1 byte.
- **Buffer Swapping**: The fundamental logic of moving data between two memory regions, which is the "daily bread" of GPU programming.
- **Memory Blocks**: In HPC, we operate on **buffers (arrays)** rather than single variables.

---

### ⚠️ Lessons Learned & Pitfalls

##### 1. Wild Pointers
- **Mistake**: Using uninitialized pointers leads to Segfaults.
- **Solution**: Always initialize pointers to `nullptr`.

##### 2. The Power of `void*`
- **Blind Spot**: Initially confused by `void*` in copy functions.
- **Insight**: `void*` is the standard for generic memory operations. In GPU drivers, the hardware doesn't care if the data is `int` or `float`; it only cares about raw bytes.

##### 3. Array Decaying
- **Note**: Arrays passed to functions "decay" into pointers, losing size information. Always pass the `size` explicitly.

