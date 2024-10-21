//
// Created by RINI on 21/10/2024.
//

#include <iostream>

template <typename SortingPolicy>
    class Sorter : public SortingPolicy {
public:
    void sort() {
        this->sortImplementation();
    }
};

class QuickSortPolicy {
public:
    void sortImplementation() {
        std::cout << "Sorting using QuickSort\n";
        // Quick sort algorithm implementation
    }
};

void demonstratePolicyBasedDesign() {
    Sorter<QuickSortPolicy> sorter;
    sorter.sort();
}
