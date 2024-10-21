//
// Created by RINI on 21/10/2024.
//

#include <iostream>
#include <type_traits>

template <typename T>
    void process(T value) {
    if constexpr (std::is_integral_v<T>) {
        std::cout << "Processing integer: " << value << "\n";
    } else {
        std::cout << "Processing non-integer\n";
    }
}

void demonstrateTypeBasedDispatching() {
    process(10);       // Outputs: Processing integer: 10
    process(3.14);     // Outputs: Processing non-integer
}
