//
// Created by RINI on 21/10/2024.
//

#include <iostream>
#include <type_traits>

// Function enabled only if T is an integral type
template <typename T>
typename std::enable_if<std::is_integral<T>::value, void>::type
process(T value) {
    std::cout << "Processing integral type: " << value << "\n";
}

// Function enabled only if T is a floating-point type
template <typename T>
typename std::enable_if<std::is_floating_point<T>::value, void>::type
process(T value) {
    std::cout << "Processing floating-point type: " << value << "\n";
}

void demonstrateTemplateArgumentDeduction() {
    process(42);      // Calls the integral version
    process(3.14);    // Calls the floating-point version
    // process("Hello"); // Error: no matching function for call to 'process'
}
