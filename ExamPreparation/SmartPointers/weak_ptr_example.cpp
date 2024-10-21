//
// Created by RINI on 21/10/2024.
//

#include <iostream>
#include <memory>

void demonstrateWeakPtr() {
    std::shared_ptr<int> sharedPtr = std::make_shared<int>(300);
    std::weak_ptr<int> weakPtr = sharedPtr;  // Does not increase reference count

    std::cout << "Shared pointer count: " << sharedPtr.use_count() << "\n";

    if (auto lockedPtr = weakPtr.lock()) {
        std::cout << "weak_ptr value: " << *lockedPtr << "\n";
        std::cout << "Shared pointer count after lock: " << sharedPtr.use_count() << "\n";
    }
}
