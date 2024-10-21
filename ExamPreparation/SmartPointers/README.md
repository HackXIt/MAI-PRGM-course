# Smart Pointers

## Overview

Smart pointers are class templates that manage dynamic memory automatically, helping to prevent memory leaks and dangling pointers.

## Types of Smart Pointers

### `unique_ptr`

- **Ownership Model**: Exclusive ownership; only one `unique_ptr` can own a resource at a time.

- **Characteristics**:

    - Non-copyable.
    - Movable (can transfer ownership).

- **Use Cases**: When a resource should have a single owner.

- **Syntax**:

  ```cpp
  std::unique_ptr<Type> ptr = std::make_unique<Type>(args);
  ```

### `shared_ptr`

- **Ownership Model**: Shared ownership; multiple `shared_ptr`s can own the same resource.

- **Characteristics**:

    - Uses reference counting.
    - Resource is released when the last `shared_ptr` owning it is destroyed.

- **Use Cases**: When multiple parts of the program need shared access to a resource.

- **Syntax**:

  ```cpp
  std::shared_ptr<Type> ptr1 = std::make_shared<Type>(args);
  std::shared_ptr<Type> ptr2 = ptr1;  // Shared ownership
  ```

### `weak_ptr`

- **Ownership Model**: Non-owning reference to a resource managed by `shared_ptr`.

- **Characteristics**:

    - Does not affect the reference count.
    - Must be converted to `shared_ptr` to access the resource safely.

- **Use Cases**: Breaking cyclic references in graphs or observer patterns.

- **Syntax**:

  ```cpp
  std::weak_ptr<Type> weakPtr = sharedPtr;
  if (auto lockedPtr = weakPtr.lock()) {
      // Safe to use lockedPtr
  }
  ```

## Benefits

- **Automatic Resource Management**: Resources are released when no longer needed.
- **Exception Safety**: Prevents leaks even if exceptions occur.
- **Better Code Clarity**: Expresses ownership semantics explicitly.

## Implementation

- **`unique_ptr` Example**: [unique\_ptr\_example.cpp](SmartPointers/unique_ptr_example.cpp)
- **`shared_ptr` Example**: [shared\_ptr\_example.cpp](SmartPointers/shared_ptr_example.cpp)
- **`weak_ptr` Example**: [weak\_ptr\_example.cpp](SmartPointers/weak_ptr_example.cpp)