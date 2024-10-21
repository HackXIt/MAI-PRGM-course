//
// Created by RINI on 21/10/2024.
//

#include <iostream>
#include <set>

void demonstrateSTLSet() {
    std::set<int> s = {3, 1, 2};
    s.insert(2);  // Duplicate, will not be added

    std::cout << "Set elements: ";
    for (const auto& val : s) {
        std::cout << val << " ";
    }
    std::cout << "\n";
}
