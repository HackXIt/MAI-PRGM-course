//
// Created by RINI on 21/10/2024.
//

#include <iostream>
#include <string>

template <typename T>
    class Box {
    T value;

public:
    Box(T v) : value(v) {}
    T getValue() const { return value; }
};

void demonstrateClassTemplates() {

    Box<int> intBox(123);
    Box<std::string> strBox("Hello");

    std::cout << "intBox value: " << intBox.getValue() << "\n";
    std::cout << "strBox value: " << strBox.getValue() << "\n";
}
