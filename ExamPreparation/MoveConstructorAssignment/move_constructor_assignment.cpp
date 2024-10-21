//
// Created by RINI on 21/10/2024.
//

#include <iostream>
#include <utility>

class MyClass {
    int* data;

public:
    MyClass(int value) : data(new int(value)) {
        std::cout << "Constructing\n";
    }

    // Move constructor
    MyClass(MyClass&& other) noexcept : data(other.data) {
        std::cout << "Move Constructing\n";
        other.data = nullptr;
    }

    // Move assignment operator
    MyClass& operator=(MyClass&& other) noexcept {
        std::cout << "Move Assigning\n";
        if (this == &other) return *this;
        delete data;
        data = other.data;
        other.data = nullptr;
        return *this;
    }

    ~MyClass() {
        std::cout << "Destructing\n";
        delete data;
    }

    int getValue() const { return data ? *data : 0; }
};

void demonstrateMoveConstructorAssignment() {
    MyClass obj1(100);
    MyClass obj2 = std::move(obj1);  // Move constructor

    std::cout << "obj2 value: " << obj2.getValue() << "\n";

    MyClass obj3(200);
    obj2 = std::move(obj3);          // Move assignment operator

    std::cout << "obj2 new value: " << obj2.getValue() << "\n";
}
