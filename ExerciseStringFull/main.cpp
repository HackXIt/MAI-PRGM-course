//
// Created by RINI on 21/10/2024.
//

#include <iostream>
#include "String.h"

int main() {
    String s1("Hello");
    String s2("World");

    s1.append(s2);
    std::cout << s1.c_str() << std::endl; // Output: HelloWorld

    String s3 = s1 + s2;
    std::cout << s3.c_str() << std::endl; // Output: HelloWorldWorld

    // Testing iterator
    for (auto it = s1.begin(); it != s1.end(); ++it) {
        std::cout << *it; // Output: HelloWorld
    }
    std::cout << std::endl;

    return 0;
}
