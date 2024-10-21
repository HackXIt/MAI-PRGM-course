# Pointer vs. Reference vs. Copy

## Overview

Understanding how data is passed to functions and how variables reference data is critical for effective C++ programming.

## Passing by Value (Copy)

- **Behavior**: The function receives a copy of the argument.

- **Implications**:

    - Changes to the parameter do not affect the original argument.
    - Can be inefficient for large objects due to copying overhead.

- **Syntax**:

  ```cpp
  void function(Type param);
  ```

## Passing by Reference

- **Behavior**: The function receives a reference to the original argument.

- **Implications**:

    - Changes to the parameter affect the original argument.
    - No copying overhead.
    - Cannot be null.

- **Syntax**:

  ```cpp
  void function(Type& param);
  ```

## Passing by Pointer

- **Behavior**: The function receives a pointer to the argument.

- **Implications**:

    - Can modify the original argument.
    - Can be null (need to check before dereferencing).
    - Explicit dereferencing required.

- **Syntax**:

  ```cpp
  void function(Type* param);
  ```

## Use Cases

- **Copy**: When the function should not modify the original data, and the data is small.
- **Reference**: When the function needs to modify the original data or to avoid copying large objects.
- **Pointer**: Similar to references but allows for null values and pointer arithmetic.

## Implementation

See [pointer\_reference\_copy.cpp](pointer_reference_copy.cpp) for examples demonstrating the differences between passing by value, reference, and pointer.