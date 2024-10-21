//
// Created by RINI on 21/10/2024.
//

#include <iostream>

template <typename Derived>
    class Base {
public:
    void interface() {
        static_cast<Derived*>(this)->implementation();
    }
};

class Derived : public Base<Derived> {
public:
    void implementation() {
        std::cout << "CRTP implementation in Derived\n";
    }
};

void demonstrateCRTP() {
    Derived obj;
    obj.interface();
}
