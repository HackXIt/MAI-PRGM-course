# Constructors and Destructors

## Overview

Constructors and destructors are special member functions of a class that are responsible for initializing and cleaning up objects.

## Constructors

### Default Constructor

- **Purpose**: Initializes objects when no arguments are provided.

- **Syntax**:

  ```cpp
  ClassName();
  ```

### Parameterized Constructor

- **Purpose**: Allows initializing objects with specific values.

- **Syntax**:

  ```cpp
  ClassName(Type arg1, Type arg2);
  ```

### Initializer Lists

- **Usage**: Initialize member variables before the constructor body executes.

- **Syntax**:

  ```cpp
  ClassName(Type arg) : member(arg) {
      // Constructor body
  }
  ```

### Copy Constructor

- **Purpose**: Creates a new object as a copy of an existing object.

- **Syntax**:

  ```cpp
  ClassName(const ClassName& other);
  ```

## Destructors

- **Purpose**: Clean up resources when an object goes out of scope or is deleted.

- **Syntax**:

  ```cpp
  ~ClassName();
  ```

- **Automatic Invocation**: Called automatically by the compiler; no need to call explicitly.

## Resource Management

- **RAII**: Constructors acquire resources; destructors release them.
- **Exception Safety**: Ensures resources are properly released even if an exception occurs.

## Implementation

See [constructors\_destructors.cpp](constructors_destructors.cpp) for code demonstrating different types of constructors and destructors.