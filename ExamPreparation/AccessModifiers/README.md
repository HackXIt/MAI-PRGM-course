# Access Modifiers

## Overview

Access modifiers in C++ control the visibility and accessibility of class members. They enforce encapsulation by restricting access to the inner workings of a class.

## Access Levels

### Public

- **Accessible**: Anywhere the object is visible.
- **Usage**: Interface of the class; methods and variables intended for use by other classes.

### Private

- **Accessible**: Only within the class itself.
- **Usage**: Internal data and helper methods not intended for external use.

### Protected

- **Accessible**: Within the class and its derived classes.
- **Usage**: Allows derived classes to access base class members while keeping them hidden from other code.

## Encapsulation

- **Purpose**: To protect object integrity by preventing external code from setting an object to an invalid state.

- **Getters and Setters**: Provide controlled access to private members.

  ```cpp
  class MyClass {
  private:
      int value;
  public:
      void setValue(int v) { value = v; }
      int getValue() const { return value; }
  };
  ```

## Implementation

See [access\_modifiers.cpp](access_modifiers.cpp) for examples of how access modifiers are used in classes and inheritance.