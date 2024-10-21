//
// Created by RINI on 21/10/2024.
//

#include <iostream>
#include <vector>
#include <list>
#include <forward_list>
#include <iterator>
#include <algorithm>

void demonstrateIterators() {
    // Random Access Iterator (vector)
    std::vector<int> vec = {1, 2, 3, 4, 5};
    std::cout << "Vector elements using iterator: ";
    for (auto it = vec.begin(); it != vec.end(); ++it) {
        std::cout << *it << " ";
    }
    std::cout << "\n";

    // Bidirectional Iterator (list)
    std::list<int> lst = {6, 7, 8, 9, 10};
    std::cout << "List elements using iterator: ";
    for (auto it = lst.begin(); it != lst.end(); ++it) {
        std::cout << *it << " ";
    }
    std::cout << "\n";

    // Forward Iterator (forward_list)
    std::forward_list<int> flst = {11, 12, 13, 14, 15};
    std::cout << "Forward List elements using iterator: ";
    for (auto it = flst.begin(); it != flst.end(); ++it) {
        std::cout << *it << " ";
    }
    std::cout << "\n";
}
