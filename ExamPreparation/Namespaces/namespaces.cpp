//
// Created by RINI on 21/10/2024.
//

#include <iostream>

// Define a namespace
    namespace Math {
        int add(int a, int b) {
            return a + b;
        }
    }

// Nested namespaces (C++17 and later)
namespace Graphics::Colors {
        void display() {
            std::cout << "Displaying colors.\n";
        }
    }

// Anonymous namespace
namespace {
        void secretFunction() {
            std::cout << "This is a secret.\n";
        }
    }

// Using directive
using namespace Math;

void demonstrateNamespaces() {
    std::cout << "Sum: " << add(2, 3) << "\n";

    Graphics::Colors::display();
    secretFunction();
}
