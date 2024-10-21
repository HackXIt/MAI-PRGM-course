//
// Created by RINI on 21/10/2024.
//

#include <iostream>

class MyClass {
    // Rule of Zero: No need to define special members if not managing resources
    int value;

public:
    MyClass(int v) : value(v) {}
    int getValue() const { return value; }
};

void demonstrateRuleOfThreeFiveZero() {
    MyClass obj1(50);
    MyClass obj2 = obj1;  // Compiler-generated copy constructor

    std::cout << "obj1 value: " << obj1.getValue() << "\n";
    std::cout << "obj2 value: " << obj2.getValue() << "\n";
}
