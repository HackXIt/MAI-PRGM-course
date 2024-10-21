//
// Created by RINI on 21/10/2024.
//

#include <iostream>
#include <fstream>

void writeToFile() {
    std::ofstream file("example.txt");  // Resource acquired
    if (file.is_open()) {
        file << "Hello, World!\n";
    }
}  // Resource automatically released when 'file' goes out of scope

void demonstrateRAII() {
    writeToFile();
    std::cout << "File written using RAII\n";
}
