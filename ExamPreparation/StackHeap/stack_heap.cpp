//
// Created by RINI on 21/10/2024.
//

#include <iostream>

void demonstrateStackHeap() {
    int stackVar = 5;            // Allocated on the stack
    int* heapVar = new int(10);  // Allocated on the heap

    std::cout << "Stack variable: " << stackVar << "\n";
    std::cout << "Heap variable: " << *heapVar << "\n";

    delete heapVar;              // Manually deallocated
}
