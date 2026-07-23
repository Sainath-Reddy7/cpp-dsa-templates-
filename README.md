# Data Structures and Algorithms (C++) Repository

A modern C++17 library and collection of template-based implementations of core Data Structures and Algorithms (DSA), featuring demonstration applications for each component.

---

## 📋 Overview

This repository contains C++ implementations of fundamental data structures (Stack, Queue, Priority Queue) and algorithms (Heap Sort) along with demo applications illustrating their usage. All data structures are implemented using **C++ Templates**, enabling type-agnostic, reusable code.

---

## 📁 Repository Structure & File Overview

| File | Type | Description |
| :--- | :--- | :--- |
| [`CMakeLists.txt`](file:///c:/Users/bsain/Desktop/AI/SEM%203/dsa/ADA_XXX/CMakeLists.txt) | Build Config | CMake build specification (C++17 target). |
| [`main.c++`](file:///c:/Users/bsain/Desktop/AI/SEM%203/dsa/ADA_XXX/main.c++) | Source | Main program entry point containing configurable demo calls. |
| **Data Structures** | | |
| [`Stack.hpp`](file:///c:/Users/bsain/Desktop/AI/SEM%203/dsa/ADA_XXX/Stack.hpp) | Header | Dynamic singly linked-list based Stack implementation (`Stack<T>`). |
| [`FixedSizeStack.hpp`](file:///c:/Users/bsain/Desktop/AI/SEM%203/dsa/ADA_XXX/FixedSizeStack.hpp) | Header | Static array-based Fixed-Size Stack implementation (`FixedSizeStack<T>`). |
| [`Queue.hpp`](file:///c:/Users/bsain/Desktop/AI/SEM%203/dsa/ADA_XXX/Queue.hpp) | Header | Singly linked-list based First-In-First-Out Queue implementation (`Queue<T>`). |
| [`PriorityQueue.hpp`](file:///c:/Users/bsain/Desktop/AI/SEM%203/dsa/ADA_XXX/PriorityQueue.hpp) | Header | Max-Heap array-based Priority Queue implementation (`PriorityQueue<T>`). |
| [`HeapSort.hpp`](file:///c:/Users/bsain/Desktop/AI/SEM%203/dsa/ADA_XXX/HeapSort.hpp) | Header | In-place Heap Sort algorithm class implementation (`HeapSort<T>`). |
| **Demo Applications** | | |
| [`StackApp.hpp`](file:///c:/Users/bsain/Desktop/AI/SEM%203/dsa/ADA_XXX/StackApp.hpp) | Header | String reversal demonstration using dynamic `Stack<char>`. |
| [`FixedSizeStackApp.hpp`](file:///c:/Users/bsain/Desktop/AI/SEM%203/dsa/ADA_XXX/FixedSizeStackApp.hpp) | Header | String reversal demonstration using `FixedSizeStack<char>`. |
| [`QueueApp.hpp`](file:///c:/Users/bsain/Desktop/AI/SEM%203/dsa/ADA_XXX/QueueApp.hpp) | Header | Sequential enqueue and dequeue demonstration using `Queue<int>`. |
| [`PriorityQueueApp.hpp`](file:///c:/Users/bsain/Desktop/AI/SEM%203/dsa/ADA_XXX/PriorityQueueApp.hpp) | Header | Priority scheduling demo using `PriorityQueue<Student>`. |
| [`HeapSortApp.hpp`](file:///c:/Users/bsain/Desktop/AI/SEM%203/dsa/ADA_XXX/HeapSortApp.hpp) | Header | Integer array sorting demonstration using `HeapSort<int>`. |

---

## 🛠️ Data Structures & Complexity

### 1. Dynamic Stack (`Stack.hpp`)
* **Implementation**: Singly linked-list (`Node *top`).
* **Key Methods**: `push(T data)`, `pop(T &out)`, `isEmpty()`, `size()`.
* **Complexity**:
  * Push: $\mathcal{O}(1)$
  * Pop: $\mathcal{O}(1)$
  * Space: $\mathcal{O}(N)$

### 2. Fixed Size Stack (`FixedSizeStack.hpp`)
* **Implementation**: Dynamically allocated array with pre-defined capacity. Includes overflow/underflow protection.
* **Key Methods**: `push(T item)`, `pop(T &out)`, `isEmpty()`, `size()`.
* **Complexity**:
  * Push: $\mathcal{O}(1)$
  * Pop: $\mathcal{O}(1)$
  * Auxiliary Space: $\mathcal{O}(capacity)$

### 3. Queue (`Queue.hpp`)
* **Implementation**: Singly linked-list with head (`first`) and tail (`last`) pointers.
* **Key Methods**: `enqueue(T elt)`, `dequeue(T &elt)`, `isEmpty()`, `size()`.
* **Complexity**:
  * Enqueue: $\mathcal{O}(1)$
  * Dequeue: $\mathcal{O}(1)$
  * Space: $\mathcal{O}(N)$

### 4. Priority Queue (`PriorityQueue.hpp`)
* **Implementation**: Array-based Max-Heap. Uses binary heap tree properties (`fixUp` / `fixDown`).
* **Key Methods**: `insert(T elt)`, `getmax(T &elt)`, `isEmpty()`, `size()`.
* **Complexity**:
  * Insert: $\mathcal{O}(\log N)$
  * Extract Max (`getmax`): $\mathcal{O}(\log N)$
  * Peek Max: $\mathcal{O}(1)$

### 5. Heap Sort (`HeapSort.hpp`)
* **Implementation**: In-place heapification followed by iterative max-element extraction.
* **Key Methods**: `sort(T* arr, int size)`, `heapify(...)`, `fixDown(...)`.
* **Complexity**:
  * Time Complexity: $\mathcal{O}(N \log N)$ (Best, Average, and Worst case)
  * Auxiliary Space: $\mathcal{O}(1)$ (In-place sorting)

---

## 🚀 Building and Running

### Prerequisites
* C++17 compatible compiler (`g++`, `clang++`, or `MSVC`)
* [CMake](https://cmake.org/) (Version 3.10 or higher)

### Build Instructions

```bash
# 1. Create a build directory
mkdir build
cd build

# 2. Generate build system files with CMake
cmake ..

# 3. Compile the project
cmake --build .
```

### Running the Executable

```bash
# On Linux/macOS:
./DsaCodeRepo

# On Windows:
.\Debug\DsaCodeRepo.exe
# or
.\DsaCodeRepo.exe
```

---

## 💡 Usage Example

To switch between interactive demonstration applications, open [`main.c++`](file:///c:/Users/bsain/Desktop/AI/SEM%203/dsa/ADA_XXX/main.c++) and uncomment the desired demo namespace:

```cpp
#include "HeapSortApp.hpp"
// #include "StackApp.hpp"
// #include "QueueApp.hpp"
// #include "PriorityQueueApp.hpp"

int main()
{
    // StackSpace::Demo();
    // QueueSpace::Demo();
    // PriorityQueueStackSpace::Demo();
    HeapSortSpace::Demo();
    
    return 0; 
}
```
