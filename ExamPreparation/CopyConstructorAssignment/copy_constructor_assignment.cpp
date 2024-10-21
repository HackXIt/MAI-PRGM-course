//
// Created by RINI on 21/10/2024.
//

#include <iostream>

class MyClass {
    int* data;

public:
    MyClass(int value) : data(new int(value)) {}

    // Copy constructor
    MyClass(const MyClass& other) : data(new int(*other.data)) {
        std::cout << "Copy Constructor\n";
    }

    // Assignment operator
    MyClass& operator=(const MyClass& other) {
        std::cout << "Copy Assignment Operator\n";
        if (this == &other) return *this;  // Self-assignment check
        delete data;
        data = new int(*other.data);
        return *this;
    }

    ~MyClass() {
        delete data;
    }

    int getValue() const { return *data; }
};

void demonstrateCopyConstructorAssignment() {
    MyClass obj1(42);
    MyClass obj2 = obj1;   // Copy constructor
    MyClass obj3(0);
    obj3 = obj1;           // Copy assignment operator

    std::cout << "obj2 value: " << obj2.getValue() << "\n";
    std::cout << "obj3 value: " << obj3.getValue() << "\n";
}
