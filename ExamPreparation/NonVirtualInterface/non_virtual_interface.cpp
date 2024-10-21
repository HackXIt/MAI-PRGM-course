//
// Created by RINI on 21/10/2024.
//

#include <iostream>

class Base {
public:
    void execute() {
        step1();
        step2();
    }

private:
    void step1() {
        std::cout << "Base step1\n";
    }

    virtual void step2() = 0;  // Derived classes implement this
};

class Derived : public Base {
private:
    void step2() override {
        std::cout << "Derived step2\n";
    }
};

void demonstrateNonVirtualInterface() {
    Derived obj;
    obj.execute();
}
