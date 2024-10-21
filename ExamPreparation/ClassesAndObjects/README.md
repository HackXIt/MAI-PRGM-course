# Classes and Objects

## Overview

Classes are the fundamental building blocks of object-oriented programming in C++. They encapsulate data for the object and methods to manipulate that data.

## Key Concepts

### OOP Principles

- **Encapsulation**: Bundling data and methods that operate on that data within one unit (class).
- **Abstraction**: Hiding complex implementation details and showing only the necessary features.
- **Inheritance**: Deriving new classes from existing ones to promote code reuse.
- **Polymorphism**: Ability of different classes to be treated as instances of the same class through inheritance.

### Class Definitions

- **Syntax**:

  ```cpp
  class ClassName {
  private:
      // Private members
  public:
      // Public members
  protected:
      // Protected members
  };
  ```

- **Member Variables (Attributes)**: Variables that hold the state of an object.

- **Member Functions (Methods)**: Functions that define the behavior of the object.

### Object Instantiation

- **Creating Objects**:

  ```cpp
  ClassName obj;           // Stack allocation
  ClassName* ptr = new ClassName(); // Heap allocation
  ```

- **Accessing Members**:

  ```cpp
  obj.method();
  ptr->method();
  ```

## Implementation

See [classes\_and\_objects.cpp](classes_and_objects.cpp) for code examples demonstrating class definitions, member variables, methods, and object instantiation.