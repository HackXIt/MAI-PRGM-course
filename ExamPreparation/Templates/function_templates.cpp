//
// Created by RINI on 21/10/2024.
//

#include <iostream>

template <typename T>
    T add(T a, T b) {
    return a + b;
}

void demonstrateFunctionTemplates() {

    std::cout << "add<int>: " << add(1, 2) << "\n";
    std::cout << "add<double>: " << add(1.5, 2.5) << "\n";
}
