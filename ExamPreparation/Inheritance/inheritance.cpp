//
// Created by RINI on 21/10/2024.
//

#include <iostream>

class Animal {
public:
    virtual void makeSound() const {
        std::cout << "Some generic animal sound\n";
    }
};

class Dog : public Animal {
public:
    void makeSound() const override {
        std::cout << "Bark!\n";
    }
};

void demonstrateInheritance() {
    Animal* animal = new Dog();
    animal->makeSound();  // Outputs: Bark!

    delete animal;
}
