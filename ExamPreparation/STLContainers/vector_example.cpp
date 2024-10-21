//
// Created by RINI on 21/10/2024.
//

#include <iostream>
#include <vector>

void demonstrateSTLVector() {
    std::vector<int> vec = {1, 2, 3};
    vec.push_back(4);

    std::cout << "Vector elements: ";
    for (const auto& val : vec) {
        std::cout << val << " ";
    }
    std::cout << "\n";
}
