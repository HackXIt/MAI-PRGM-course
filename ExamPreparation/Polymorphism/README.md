# Polymorphism

## Overview

Polymorphism allows objects to be treated as instances of their base type rather than their actual derived type, enabling flexible and extensible code.

## Types of Polymorphism

### Dynamic (Runtime) Polymorphism

- **Achieved Through**: Virtual functions.
- **Mechanism**: Base class pointers or references can call overridden methods in derived classes.
- **Use Case**: When behavior needs to vary at runtime depending on the derived class.

```cpp
Base* ptr = new Derived();
ptr->virtualFunction();  // Calls Derived's implementation
```

### Static (Compile-Time) Polymorphism

- **Achieved Through**: Templates and function overloading.
- **Mechanism**: Code is generated based on the types used during compilation.
- **Use Case**: When behavior can be determined at compile time.

```cpp
template <typename T>
void function(T param);

function<int>(5);     // Generates function for int
function<double>(3.14); // Generates function for double
```

## Virtual Functions and Overriding

- **Virtual Function**: A function declared with the `virtual` keyword in the base class.
- **Override**: Use the `override` keyword in the derived class to indicate that the function is overriding a virtual function.

## Implementation

See [polymorphism.cpp](Polymorphism/polymorphism.cpp) for code demonstrating both dynamic and static polymorphism.