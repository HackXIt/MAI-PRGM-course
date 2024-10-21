//
// Created by RINI on 21/10/2024.
//

#include <iostream>

class Resource {
    int value;

public:
    // Default constructor
    Resource() : value(0) {
        std::cout << "Default Constructor\n";
    }

    // Parameterized constructor
    Resource(int v) : value(v) {
        std::cout << "Parameterized Constructor\n";
    }

    // Copy constructor
    Resource(const Resource& other) : value(other.value) {
        std::cout << "Copy Constructor\n";
    }

    // Destructor
    ~Resource() {
        std::cout << "Destructor for Resource with value " << value << "\n";
    }
};

void demonstrateConstructorsDestructors() {
    Resource res1;           // Default constructor
    Resource res2(10);       // Parameterized constructor
    Resource res3 = res2;    // Copy constructor
}
