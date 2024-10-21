# Move Constructor and Move Assignment Operator

## Overview

Move semantics allow the resources owned by an rvalue object to be moved rather than copied, providing performance benefits by eliminating unnecessary deep copies.

## Move Constructor

- **Purpose**: Initialize a new object by transferring the resources from an rvalue object.

- **Syntax**:

  ```cpp
  ClassName(ClassName&& other) noexcept;
  ```

- **Implementation**:

    - Transfer ownership of resources.
    - Set the source object's pointers to `nullptr` to avoid double deletion.

## Move Assignment Operator

- **Purpose**: Transfer resources from an rvalue object to an existing object.

- **Syntax**:

  ```cpp
  ClassName& operator=(ClassName&& other) noexcept;
  ```

- **Implementation**:

    - Check for self-assignment.
    - Release any resources held by the current object.
    - Transfer ownership of resources.
    - Set the source object's pointers to `nullptr`.

## `std::move`

- **Purpose**: Casts an lvalue to an rvalue reference to enable move semantics.

- **Usage**:

  ```cpp
  ClassName obj1;
  ClassName obj2 = std::move(obj1);  // Invokes move constructor
  ```

## When to Implement

- When your class manages resources that are expensive to copy.
- To optimize performance by eliminating unnecessary copies.

## Implementation

See [move\_constructor\_assignment.cpp](MoveConstructorAssignment/move_constructor_assignment.cpp) for code demonstrating move semantics and the use of `std::move`.