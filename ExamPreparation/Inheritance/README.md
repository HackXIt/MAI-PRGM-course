# Inheritance

## Overview

Inheritance allows a new class to extend or modify the behavior of an existing class, promoting code reuse and establishing a hierarchical relationship between classes.

## Key Concepts

### Base and Derived Classes

- **Base Class (Super Class)**: The class being inherited from.
- **Derived Class (Sub Class)**: The class that inherits from the base class.

### Types of Inheritance

- **Public Inheritance**: Public and protected members of the base class become public and protected members of the derived class.
- **Protected Inheritance**: Public and protected members of the base class become protected members of the derived class.
- **Private Inheritance**: Public and protected members of the base class become private members of the derived class.

### Syntax

```cpp
class Derived : public Base {
    // Additional members
};
```

## Virtual Functions

- **Purpose**: Allow derived classes to override methods of the base class.
- **Polymorphism**: Enables dynamic binding, where the method called depends on the object's actual type at runtime.

```cpp
class Base {
public:
    virtual void method();
};
```

- **Override in Derived Class**:

```cpp
class Derived : public Base {
public:
    void method() override;
};
```

## Abstract Classes

- **Pure Virtual Functions**: Declared by assigning `0` to a virtual function, making the class abstract.

```cpp
class AbstractClass {
public:
    virtual void pureVirtualFunction() = 0;
};
```

## Implementation

See [inheritance.cpp](Inheritance/inheritance.cpp) for examples demonstrating inheritance and virtual functions.