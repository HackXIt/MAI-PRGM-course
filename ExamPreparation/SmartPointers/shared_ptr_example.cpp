//
// Created by RINI on 21/10/2024.
//

#include <iostream>
#include <memory>

void demonstrateSharedPtr() {
    std::shared_ptr<int> ptr1 = std::make_shared<int>(200);
    std::shared_ptr<int> ptr2 = ptr1;  // Shared ownership
    std::cout << "shared_ptr value: " << *ptr1 << "\n";
    std::cout << "Reference count: " << ptr1.use_count() << "\n";
}
