//
// Created by RINI on 21/10/2024.
//

#include <iostream>

// Function declarations for each snippet
void demonstrateNamespaces();
void demonstrateClassesAndObjects();
void demonstrateAccessModifiers();
void demonstrateConstructorsDestructors();
void demonstratePointerReferenceCopy();
void demonstrateRAII();
void demonstrateStackHeap();
void demonstrateNewDelete();
void demonstrateCopyConstructorAssignment();
void demonstrateMoveConstructorAssignment();
void demonstrateRuleOfThreeFiveZero();
void demonstrateInheritance();
void demonstratePolymorphism();
void demonstrateNonVirtualInterface();
void demonstrateUniquePtr();
void demonstrateSharedPtr();
void demonstrateWeakPtr();
void demonstrateFunctionTemplates();
void demonstrateClassTemplates();
void demonstrateTemplateSpecialization();
void demonstrateTemplateArgumentDeduction();
void demonstrateSTLVector();
void demonstrateSTLList();
void demonstrateSTLSet();
void demonstrateSTLMap();
void demonstrateSTLUnorderedMap();
void demonstrateIterators();
void demonstrateAlgorithms();
void demonstrateCRTP();
void demonstratePolicyBasedDesign();
void demonstrateTypeBasedDispatching();

int main() {
    std::cout << "=== Demonstrating Namespaces ===\n";
    demonstrateNamespaces();

    std::cout << "\n=== Demonstrating Classes and Objects ===\n";
    demonstrateClassesAndObjects();

    std::cout << "\n=== Demonstrating Access Modifiers ===\n";
    demonstrateAccessModifiers();

    std::cout << "\n=== Demonstrating Constructors and Destructors ===\n";
    demonstrateConstructorsDestructors();

    std::cout << "\n=== Demonstrating Pointer vs. Reference vs. Copy ===\n";
    demonstratePointerReferenceCopy();

    std::cout << "\n=== Demonstrating RAII ===\n";
    demonstrateRAII();

    std::cout << "\n=== Demonstrating Stack vs. Heap ===\n";
    demonstrateStackHeap();

    std::cout << "\n=== Demonstrating New/Delete ===\n";
    demonstrateNewDelete();

    std::cout << "\n=== Demonstrating Copy Constructor and Assignment Operator ===\n";
    demonstrateCopyConstructorAssignment();

    std::cout << "\n=== Demonstrating Move Constructor and Move Assignment Operator ===\n";
    demonstrateMoveConstructorAssignment();

    std::cout << "\n=== Demonstrating Rule of Three/Five/Zero ===\n";
    demonstrateRuleOfThreeFiveZero();

    std::cout << "\n=== Demonstrating Inheritance ===\n";
    demonstrateInheritance();

    std::cout << "\n=== Demonstrating Polymorphism ===\n";
    demonstratePolymorphism();

    std::cout << "\n=== Demonstrating Non-Virtual Interface ===\n";
    demonstrateNonVirtualInterface();

    std::cout << "\n=== Demonstrating unique_ptr ===\n";
    demonstrateUniquePtr();

    std::cout << "\n=== Demonstrating shared_ptr ===\n";
    demonstrateSharedPtr();

    std::cout << "\n=== Demonstrating weak_ptr ===\n";
    demonstrateWeakPtr();

    std::cout << "\n=== Demonstrating Function Templates ===\n";
    demonstrateFunctionTemplates();

    std::cout << "\n=== Demonstrating Class Templates ===\n";
    demonstrateClassTemplates();

    std::cout << "\n=== Demonstrating Template Specialization ===\n";
    demonstrateTemplateSpecialization();

    std::cout << "\n=== Demonstrating Template Argument Deduction and SFINAE ===\n";
    demonstrateTemplateArgumentDeduction();

    std::cout << "\n=== Demonstrating STL Vector ===\n";
    demonstrateSTLVector();

    std::cout << "\n=== Demonstrating STL List ===\n";
    demonstrateSTLList();

    std::cout << "\n=== Demonstrating STL Set ===\n";
    demonstrateSTLSet();

    std::cout << "\n=== Demonstrating STL Map ===\n";
    demonstrateSTLMap();

    std::cout << "\n=== Demonstrating STL Unordered Map ===\n";
    demonstrateSTLUnorderedMap();

    std::cout << "\n=== Demonstrating Iterators ===\n";
    demonstrateIterators();

    std::cout << "\n=== Demonstrating Algorithms ===\n";
    demonstrateAlgorithms();

    std::cout << "\n=== Demonstrating CRTP ===\n";
    demonstrateCRTP();

    std::cout << "\n=== Demonstrating Policy-Based Design ===\n";
    demonstratePolicyBasedDesign();

    std::cout << "\n=== Demonstrating Type-Based Dispatching ===\n";
    demonstrateTypeBasedDispatching();

    return 0;
}
