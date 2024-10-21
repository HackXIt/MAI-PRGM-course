//
// Created by RINI on 21/10/2024.
//

#include <iostream>

// Dynamic (runtime) polymorphism
class Shape {
public:
    virtual void draw() const {
        std::cout << "Drawing Shape\n";
    }
};

class Circle : public Shape {
public:
    void draw() const override {
        std::cout << "Drawing Circle\n";
    }
};

// Static (compile-time) polymorphism with templates
template <typename T>
void print(const T& value) {
    std::cout << value << "\n";
}

void demonstratePolymorphism() {
    Shape* shape = new Circle();
    shape->draw();  // Outputs: Drawing Circle

    delete shape;

    print(5);          // Prints an integer
    print("Hello");    // Prints a C-string
    print(3.14);       // Prints a double
}
