//
// Created by RINI on 21/10/2024.
//

#include <iostream>
#include <memory>

void demonstrateUniquePtr() {
    std::unique_ptr<int> ptr = std::make_unique<int>(100);
    std::cout << "unique_ptr value: " << *ptr << "\n";
    // ptr has exclusive ownership of the integer
}
