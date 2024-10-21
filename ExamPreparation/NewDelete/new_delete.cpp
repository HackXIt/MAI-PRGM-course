//
// Created by RINI on 21/10/2024.
//

#include <iostream>

void demonstrateNewDelete() {
    int* arr = new int[5];   // Allocate array on the heap
    for (int i = 0; i < 5; ++i) {
        arr[i] = i * 10;
    }

    std::cout << "Array elements: ";
    for (int i = 0; i < 5; ++i) {
        std::cout << arr[i] << " ";
    }
    std::cout << "\n";

    delete[] arr;            // Deallocate the array
}
