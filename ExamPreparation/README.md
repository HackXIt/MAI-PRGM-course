# Exam Preparation Guide

This repository contains code snippets and explanations for various advanced C++ topics to help you prepare for your exam. Each topic is implemented in its own folder, and this guide will explain each topic and reference the corresponding implementation files.

---

## Table of Contents

- [C++ Basics](#c-basics)
    - [Namespaces](#namespaces)
    - [Classes and Objects](#classes-and-objects)
    - [Access Modifiers](#access-modifiers)
    - [Constructors and Destructors](#constructors-and-destructors)
    - [Pointer vs. Reference vs. Copy](#pointer-vs-reference-vs-copy)
- [Memory Management](#memory-management)
    - [RAII (Resource Acquisition Is Initialization)](#raii-resource-acquisition-is-initialization)
    - [Stack vs. Heap](#stack-vs-heap)
    - [New/Delete vs. Malloc/Free](#newdelete-vs-mallocfree)
- [Special Member Functions](#special-member-functions)
    - [Copy Constructor and Assignment Operator](#copy-constructor-and-assignment-operator)
    - [Move Constructor and Move Assignment Operator](#move-constructor-and-move-assignment-operator)
    - [Rule of Three/Five/Zero](#rule-of-threefivezero)
- [Polymorphism and Inheritance](#polymorphism-and-inheritance)
    - [Inheritance](#inheritance)
    - [Polymorphism](#polymorphism)
    - [Non-Virtual Interface](#non-virtual-interface)
- [Smart Pointers](#smart-pointers)
    - [`unique_ptr`](#unique_ptr)
    - [`shared_ptr`](#shared_ptr)
    - [`weak_ptr`](#weak_ptr)
- [Templates](#templates)
    - [Function Templates](#function-templates)
    - [Class Templates](#class-templates)
    - [Template Specialization](#template-specialization)
    - [Template Argument Deduction and SFINAE](#template-argument-deduction-and-sfinae)
- [Standard Template Library (STL)](#standard-template-library-stl)
    - [Containers](#containers)
        - [Vector](#vector)
        - [List](#list)
        - [Set](#set)
        - [Map](#map)
        - [Unordered Map](#unordered-map)
    - [Iterators](#iterators)
    - [Algorithms](#algorithms)
- [Idioms and Advanced C++](#idioms-and-advanced-c)
    - [CRTP (Curiously Recurring Template Pattern)](#crtp-curiously-recurring-template-pattern)
    - [Policy-Based Design](#policy-based-design)
    - [Type-Based Dispatching](#type-based-dispatching)
- [Exam Preparation Tips](#exam-preparation-tips)

---

## C++ Basics

### Namespaces

Namespaces are used to organize code into logical groups and prevent name collisions, especially when your code base includes multiple libraries.

- **Definitions**: Declared using the `namespace` keyword.
- **Nested Namespaces**: Namespaces can be nested within other namespaces for better organization (e.g., `namespace A::B` in C++17 and later).
- **Anonymous Namespaces**: Provide internal linkage; symbols are accessible only within the translation unit.
- **Using Directive**: The `using` directive (`using namespace std;`) brings all names from a namespace into the current scope.

**Implementation**: [namespaces.cpp](Namespaces/namespaces.cpp)

### Classes and Objects

Object-Oriented Programming (OOP) principles in C++ revolve around classes and objects.

- **Class Definitions**: Blueprints for creating objects, defined using the `class` keyword.
- **Attributes (Member Variables)**: Variables that hold the state of a class.
- **Methods**: Functions that operate on the class's data.
- **Object Instantiation**: Creating instances of classes using constructors.

**Implementation**: [classes\_and\_objects.cpp](ClassesAndObjects/classes_and_objects.cpp)

### Access Modifiers

Access modifiers control the visibility and accessibility of class members.

- **Public**: Accessible from anywhere where the object is visible.
- **Protected**: Accessible within the class and its derived classes.
- **Private**: Accessible only within the class itself.

These modifiers enforce encapsulation, a core OOP principle.

**Implementation**: [access\_modifiers.cpp](AccessModifiers/access_modifiers.cpp)

### Constructors and Destructors

Constructors and destructors manage object creation and destruction.

- **Default Constructor**: A constructor that can be called with no arguments.
- **Parameterized Constructor**: Takes parameters to initialize object attributes.
- **Copy Constructor**: Initializes an object using another object of the same class.
- **Destructor**: Cleans up resources when an object goes out of scope.

**Implementation**: [constructors\_destructors.cpp](ConstructorsDestructors/constructors_destructors.cpp)

### Pointer vs. Reference vs. Copy

Understanding how data is passed in functions is crucial.

- **Copy**: Passing by value; a copy of the data is made.
- **Reference**: Passing by reference; the function operates on the original data.
- **Pointer**: Holds the memory address of a variable; can be null or re-pointed.

Implications include memory management considerations and performance impacts due to copying large objects.

**Implementation**: [pointer\_reference\_copy.cpp](PointerReferenceCopy/pointer_reference_copy.cpp)

---

## Memory Management

### RAII (Resource Acquisition Is Initialization)

RAII is a programming idiom that binds the life cycle of a resource (e.g., memory, file handle) to the lifetime of an object.

- **Principles**: Acquire resources in constructors and release them in destructors.
- **Benefits**: Ensures resource deallocation and exception safety.

**Implementation**: [raii.cpp](RAII/raii.cpp)

### Stack vs. Heap

Understanding where memory is allocated helps in managing resources.

- **Stack Allocation**: Automatic storage duration; memory is allocated and deallocated automatically.
- **Heap Allocation**: Dynamic storage duration; memory is allocated using `new`/`malloc` and must be deallocated using `delete`/`free`.

**Implementation**: [stack\_heap.cpp](StackHeap/stack_heap.cpp)

### New/Delete vs. Malloc/Free

Differences between C++ and C memory management functions.

- **`new`/`delete`**:
    - Allocate/deallocate memory.
    - Call constructors/destructors.
    - Type-safe.
- **`malloc`/`free`**:
    - Allocate/deallocate raw memory.
    - Do not call constructors/destructors.
    - Require manual casting to the appropriate type.

**Implementation**: [new\_delete.cpp](NewDelete/new_delete.cpp)

---

## Special Member Functions

### Copy Constructor and Assignment Operator

Implementing these functions allows for proper copying of objects, especially those that manage resources.

- **Deep Copy**: Creates a new copy of the resource.
- **Shallow Copy**: Copies the pointer, not the actual resource.
- **Self-Assignment Check**: Important in the assignment operator to handle cases like `obj = obj;`.

**Implementation**: [copy\_constructor\_assignment.cpp](CopyConstructorAssignment/copy_constructor_assignment.cpp)

### Move Constructor and Move Assignment Operator

Enable efficient resource transfer from temporary (rvalue) objects.

- **Move Constructor**: Transfers resource ownership from the source to the target object.
- **Move Assignment Operator**: Transfers resources in assignment contexts.
- **`std::move`**: Used to indicate that an object can be moved.

**Implementation**: [move\_constructor\_assignment.cpp](MoveConstructorAssignment/move_constructor_assignment.cpp)

### Rule of Three/Five/Zero

Guidelines for when to implement or omit special member functions.

- **Rule of Three**: If you implement either the destructor, copy constructor, or copy assignment operator, you should implement all three.
- **Rule of Five**: Extends the Rule of Three by adding the move constructor and move assignment operator.
- **Rule of Zero**: Rely on the compiler-generated functions when possible.

**Implementation**: [rule\_of\_three\_five\_zero.cpp](RuleOfThreeFiveZero/rule_of_three_five_zero.cpp)

---

## Polymorphism and Inheritance

### Inheritance

Inheritance allows a class (derived class) to inherit attributes and methods from another class (base class).

- **Base and Derived Classes**: The base class provides common functionality; the derived class extends or overrides it.
- **Public Inheritance**: Public members of the base class become public in the derived class.
- **Virtual Functions**: Allow derived classes to override methods for dynamic polymorphism.

**Implementation**: [inheritance.cpp](Inheritance/inheritance.cpp)

### Polymorphism

Polymorphism enables treating objects of different classes through a common interface.

- **Dynamic (Runtime) Polymorphism**: Achieved using virtual functions and base class pointers or references.
- **Static (Compile-Time) Polymorphism**: Achieved using templates.

**Implementation**: [polymorphism.cpp](Polymorphism/polymorphism.cpp)

### Non-Virtual Interface

Design guideline where public non-virtual functions call private virtual functions.

- **Purpose**: Provides a stable interface while allowing derived classes to customize behavior.
- **Efficiency**: Reduces the number of virtual calls in the public interface.

**Implementation**: [non\_virtual\_interface.cpp](NonVirtualInterface/non_virtual_interface.cpp)

---

## Smart Pointers

### `unique_ptr`

Provides exclusive ownership of a dynamically allocated object.

- **Usage**: Replaces raw pointers with automatic resource management.
- **Characteristics**: Non-copyable but movable.

**Implementation**: [unique\_ptr\_example.cpp](SmartPointers/unique_ptr_example.cpp)

### `shared_ptr`

Allows multiple owners of a dynamically allocated object through reference counting.

- **Usage**: Suitable when ownership needs to be shared.
- **Reference Counting**: Keeps track of how many `shared_ptr`s own the object.

**Implementation**: [shared\_ptr\_example.cpp](SmartPointers/shared_ptr_example.cpp)

### `weak_ptr`

Holds a non-owning reference to an object managed by `shared_ptr`.

- **Usage**: Prevents cyclic references that can lead to memory leaks.
- **Locking**: Must be converted to a `shared_ptr` before accessing the object.

**Implementation**: [weak\_ptr\_example.cpp](SmartPointers/weak_ptr_example.cpp)

---

## Templates

### Function Templates

Enable functions to operate with generic types.

- **Generic Programming**: Write code that works with any data type.
- **Type Deduction**: Compiler deduces the template argument types from function arguments.

**Implementation**: [function\_templates.cpp](Templates/function_templates.cpp)

### Class Templates

Define classes with generic types.

- **Template Classes**: Classes parameterized with one or more types.
- **Template Instantiation**: Compiler generates class code for each type used.

**Implementation**: [class\_templates.cpp](Templates/class_templates.cpp)

### Template Specialization

Customize template behavior for specific types.

- **Explicit Specialization**: Provide a specific implementation for a particular type.
- **Partial Specialization**: Specialize templates based on certain template parameters.

**Implementation**: [template\_specialization.cpp](Templates/template_specialization.cpp)

### Template Argument Deduction and SFINAE

Control template instantiation based on type traits.

- **Template Argument Deduction**: Compiler deduces template parameters from function arguments.
- **SFINAE (Substitution Failure Is Not An Error)**: Allows templates to fail gracefully when certain conditions are not met.
- **`std::enable_if`**: Used to enable or disable function templates based on conditions.

**Implementation**: [template\_argument\_deduction.cpp](Templates/template_argument_deduction.cpp)

---

## Standard Template Library (STL)

### Containers

#### Vector

Dynamic array that can change size.

- **Features**: Fast random access, efficient at adding/removing elements at the end.
- **Use Cases**: General-purpose container for sequences.

**Implementation**: [vector\_example.cpp](STLContainers/vector_example.cpp)

#### List

Doubly linked list.

- **Features**: Efficient insertions and deletions anywhere in the list.
- **Use Cases**: When frequent insertions and deletions are required.

**Implementation**: [list\_example.cpp](STLContainers/list_example.cpp)

#### Set

Stores unique elements in a sorted order.

- **Features**: Fast lookup, insertion, and removal of elements.
- **Use Cases**: Managing collections of unique items.

**Implementation**: [set\_example.cpp](STLContainers/set_example.cpp)

#### Map

Associative container storing key-value pairs.

- **Features**: Keys are unique and sorted; allows fast retrieval based on keys.
- **Use Cases**: Implementing dictionaries or associative arrays.

**Implementation**: [map\_example.cpp](STLContainers/map_example.cpp)

#### Unordered Map

Hash table implementation for key-value pairs.

- **Features**: Faster access compared to `map` for large datasets; keys are not sorted.
- **Use Cases**: When order is not important, but fast access is required.

**Implementation**: [unordered\_map\_example.cpp](STLContainers/unordered_map_example.cpp)

### Iterators

Objects that point to elements within containers.

- **Types**:
    - **Input Iterator**: Read from a sequence.
    - **Output Iterator**: Write to a sequence.
    - **Forward Iterator**: Read/write access; can move forward.
    - **Bidirectional Iterator**: Can move forward and backward.
    - **Random Access Iterator**: Supports full iterator arithmetic.
- **Use in Generic Programming**: Allow algorithms to operate on different container types.

**Implementation**: [iterators.cpp](Iterators/iterators.cpp)

### Algorithms

Generic functions provided by the STL to operate on data.

- **Examples**:
    - **`find`**: Search for a value.
    - **`for_each`**: Apply a function to each element.
    - **`copy`**: Copy elements from one container to another.
    - **`sort`**: Sort elements.
    - **`reverse`**: Reverse elements.

**Implementation**: [algorithms.cpp](Algorithms/algorithms.cpp)

---

## Idioms and Advanced C++

### CRTP (Curiously Recurring Template Pattern)

A template pattern where a class derives from a template instantiation of itself.

- **Use Cases**: Implement static polymorphism, mixins, and compile-time polymorphic behavior.
- **Benefits**: Zero runtime overhead compared to dynamic polymorphism.

**Implementation**: [crtp.cpp](CRTP/crtp.cpp)

### Policy-Based Design

Design technique that uses templates to select policies (strategies) at compile time.

- **Modularization**: Separate functionalities into independent policies.
- **Flexibility**: Combine different policies without modifying the core class.

**Implementation**: [policy\_based\_design.cpp](PolicyBasedDesign/policy_based_design.cpp)

### Type-Based Dispatching

Compile-time selection of functions based on type traits.

- **Technique**: Use templates and type traits to select appropriate implementations.
- **Performance**: Eliminates runtime overhead associated with dynamic dispatch.

**Implementation**: [type\_based\_dispatching.cpp](TypeBasedDispatching/type_based_dispatching.cpp)

---

## Exam Preparation Tips

- **Focus on Memory Management**: Understand RAII and smart pointers to manage resources safely and efficiently.
- **Master Templates**: Be comfortable with writing and using function and class templates, including specialization and SFINAE.
- **Review OOP Principles**: Reinforce your understanding of inheritance, polymorphism, and encapsulation.

---

**Good luck with your exam preparation!**

---

*Note*: For further demonstration or deeper understanding, you may consider adding additional examples or exercises to the existing implementations.