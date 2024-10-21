//
// Created by RINI on 21/10/2024.
//

#include <iostream>
#include <algorithm>
#include <vector>
#include <iterator>

void demonstrateAlgorithms() {
    std::vector<int> vec = {4, 2, 3, 1};

    std::sort(vec.begin(), vec.end());  // Sorts the vector

    std::cout << "Sorted vector: ";
    // Using for_each algorithm
    std::for_each(vec.begin(), vec.end(), [](int n) {
        std::cout << n << " ";
    });
    std::cout << "\n";

    // Using copy algorithm with ostream_iterator
    std::cout << "Vector elements: ";
    std::copy(vec.begin(), vec.end(), std::ostream_iterator<int>(std::cout, " "));
    std::cout << "\n";
}
