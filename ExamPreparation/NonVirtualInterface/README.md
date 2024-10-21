# Non-Virtual Interface (NVI)

## Overview

The Non-Virtual Interface (NVI) idiom is a design pattern where public non-virtual functions call private virtual functions. This allows the base class to control the interface while still permitting derived classes to customize behavior.

## Benefits

- **Interface Control**: Base class controls how functions are called and can enforce pre- and post-conditions.
- **Efficiency**: Reduces the number of virtual calls, which can improve performance.
- **Extensibility**: Derived classes can still customize behavior through virtual functions.

## Implementation

### Base Class

- **Public Non-Virtual Function**: Provides the interface to clients.
- **Private Virtual Function**: Allows derived classes to override behavior.

```cpp
class Base {
public:
    void execute() {
        preProcess();
        step();
        postProcess();
    }

private:
    void preProcess() {
        // Common pre-processing
    }

    virtual void step() = 0;  // Pure virtual function

    void postProcess() {
        // Common post-processing
    }
};
```

### Derived Class

- **Override Private Virtual Function**:

```cpp
class Derived : public Base {
private:
    void step() override {
        // Derived-specific implementation
    }
};
```

## Use Cases

- **Template Method Pattern**: NVI is a form of the template method pattern, where the skeleton of an algorithm is defined in the base class, and derived classes provide specific implementations.

## Implementation

See [non\_virtual\_interface.cpp](NonVirtualInterface/non_virtual_interface.cpp) for code demonstrating the NVI idiom.