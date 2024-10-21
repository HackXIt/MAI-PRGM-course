//
// Created by RINI on 21/10/2024.
//

#include <iostream>
#include <map>

void demonstrateSTLMap() {
    std::map<std::string, int> m;
    m["Alice"] = 30;
    m["Bob"] = 25;

    std::cout << "Map elements:\n";
    for (const auto& [key, value] : m) {
        std::cout << key << ": " << value << "\n";
    }
}
