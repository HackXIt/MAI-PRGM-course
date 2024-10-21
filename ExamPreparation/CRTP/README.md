# Curiously Recurring Template Pattern (CRTP)

## Overview

CRTP is a template pattern where a class `Derived` inherits from a class template instantiation of `Base<Derived>`. It allows static polymorphism and code reuse at compile time.

## Structure

```cpp
template <typename Derived>
class Base {
public:
    void interface() {
        static_cast<Derived*>(this)->implementation();
    }
};

class Derived : public Base<Derived> {
public:
    void implementation() {
        // Derived-specific implementation
    }
};
```

## Benefits

- **Static Polymorphism**: Polymorphic behavior is resolved at compile time.
- **No Runtime Overhead**: Eliminates the need for virtual functions and vtables.
- **Code Reuse**: Base class provides common functionality that can be customized by the derived class.

## Use Cases

- **Mixins**: Add functionality to classes through inheritance.
- **Policy Classes**: Implement different behaviors based on the derived class.

## Implementation

See [crtp.cpp](crtp.cpp) for code demonstrating the CRTP pattern.