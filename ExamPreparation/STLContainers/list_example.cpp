//
// Created by RINI on 21/10/2024.
//

#include <iostream>
#include <list>

void demonstrateSTLList() {
    std::list<int> lst = {1, 2, 3};
    lst.push_front(0);

    std::cout << "List elements: ";
    for (const auto& val : lst) {
        std::cout << val << " ";
    }
    std::cout << "\n";
}
