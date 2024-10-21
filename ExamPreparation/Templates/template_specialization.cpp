//
// Created by RINI on 21/10/2024.
//

#include <iostream>

template <typename T>
    void printType(const T& value) {
    std::cout << "General type: " << value << "\n";
}

// Explicit specialization for int
template <>
void printType<int>(const int& value) {
    std::cout << "Integer type: " << value << "\n";
}

void demonstrateTemplateSpecialization() {
    printType(3.14);  // Calls general template
    printType(42);    // Calls specialized template for int
}
