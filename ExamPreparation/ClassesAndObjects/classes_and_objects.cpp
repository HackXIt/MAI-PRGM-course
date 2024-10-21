//
// Created by RINI on 21/10/2024.
//

#include <iostream>

class Person {
private:
    std::string name;
    int age;

public:
    // Methods
    void setName(const std::string& n) { name = n; }
    void setAge(int a) { age = a; }
    void display() const {
        std::cout << name << " is " << age << " years old.\n";
    }
};

void demonstrateClassesAndObjects() {
    // Object instantiation
    Person person;
    person.setName("Alice");
    person.setAge(30);
    person.display();
}
