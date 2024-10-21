//
// Created by RINI on 21/10/2024.
//

#include <iostream>
#include <unordered_map>

void demonstrateSTLUnorderedMap() {
    std::unordered_map<std::string, int> um;
    um["key1"] = 100;
    um["key2"] = 200;

    std::cout << "Unordered Map elements:\n";
    for (const auto& [key, value] : um) {
        std::cout << key << ": " << value << "\n";
    }
}
