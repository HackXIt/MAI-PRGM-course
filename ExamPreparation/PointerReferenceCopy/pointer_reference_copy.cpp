//
// Created by RINI on 21/10/2024.
//

#include <iostream>

void modifyByValue(int x) { x = 20; }
void modifyByReference(int& x) { x = 30; }
void modifyByPointer(int* x) { *x = 40; }

void demonstratePointerReferenceCopy() {
    int num = 10;

    modifyByValue(num);      // num remains 10
    std::cout << "After modifyByValue: " << num << "\n";

    modifyByReference(num);  // num becomes 30
    std::cout << "After modifyByReference: " << num << "\n";

    modifyByPointer(&num);   // num becomes 40
    std::cout << "After modifyByPointer: " << num << "\n";
}
