# Namespaces

## Overview

Namespaces in C++ are used to organize code into logical groups and to prevent name collisions that can occur especially when your code base includes multiple libraries. They provide a scope for identifiers such as variables, classes, functions, etc.

## Key Concepts

### Definitions

- **Namespace Declaration**: Defined using the `namespace` keyword.

  ```cpp
  namespace MyNamespace {
      // Declarations and definitions
  }
  ```

- **Accessing Namespace Members**: Use the scope resolution operator `::`.

  ```cpp
  MyNamespace::myFunction();
  ```

### Nested Namespaces

- **Traditional Way**:

  ```cpp
  namespace Outer {
      namespace Inner {
          // Declarations and definitions
      }
  }
  ```

- **C++17 Nested Namespace Declaration**:

  ```cpp
  namespace Outer::Inner {
      // Declarations and definitions
  }
  ```

### Anonymous Namespaces

- **Purpose**: Symbols within an anonymous namespace have internal linkage. They are unique to the translation unit (source file) and not accessible from other files.

  ```cpp
  namespace {
      void secretFunction() {
          // Implementation
      }
  }
  ```

### Using Directive

- **Using Declaration**: Introduces a specific name from a namespace into the current scope.

  ```cpp
  using std::cout;
  cout << "Hello";
  ```

- **Using Directive**: Brings all names from a namespace into the current scope.

  ```cpp
  using namespace std;
  cout << "Hello";
  ```

## Implementation

See [namespaces.cpp](namespaces.cpp) for code examples demonstrating these concepts.