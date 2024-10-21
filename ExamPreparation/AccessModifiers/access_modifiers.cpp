//
// Created by RINI on 21/10/2024.
//

#include <iostream>

class Base {
public:
    int publicVar;

protected:
    int protectedVar;

private:
    int privateVar;
};

class Derived : public Base {
public:
    void accessMembers() {
        publicVar = 1;       // Accessible
        protectedVar = 2;    // Accessible inside derived class
        // privateVar = 3;   // Not accessible in derived class
    }
};

void demonstrateAccessModifiers() {
    Derived obj;
    obj.publicVar = 10;
    obj.accessMembers();
    std::cout << "publicVar: " << obj.publicVar << "\n";
}
