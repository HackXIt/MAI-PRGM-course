# New/Delete vs. Malloc/Free

## Overview

C++ provides `new` and `delete` operators for dynamic memory management, which are type-safe and invoke constructors/destructors. In contrast, C-style `malloc` and `free` manage raw memory and do not handle object initialization or cleanup.

## `new` and `delete`

- **`new` Operator**:

    - Allocates memory.
    - Calls the object's constructor.
    - Returns a pointer of the appropriate type.

- **`delete` Operator**:

    - Calls the object's destructor.
    - Deallocates memory.

- **Syntax**:

  ```cpp
  Type* ptr = new Type(args);
  delete ptr;
  ```

## `malloc` and `free`

- **`malloc` Function**:

    - Allocates raw memory.
    - Does **not** call constructors.
    - Returns a `void*` pointer; requires casting.

- **`free` Function**:

    - Deallocates memory.
    - Does **not** call destructors.

- **Syntax**:

  ```cpp
  Type* ptr = (Type*)malloc(sizeof(Type));
  free(ptr);
  ```

## Differences

- **Type Safety**: `new` returns a typed pointer; `malloc` returns `void*`.
- **Object Lifecycle**: `new`/`delete` manage constructors/destructors; `malloc`/`free` do not.
- **Overloading**: `new` and `delete` can be overloaded for custom behavior.

## Best Practices

- **Prefer `new`/`delete`**: When working in C++, use `new` and `delete` to ensure proper object management.
- **Avoid Mixing**: Do not mix `malloc`/`free` with `new`/`delete` for the same object.

## Implementation

See [new\_delete.cpp](NewDelete/new_delete.cpp) for code demonstrating the differences between `new`/`delete` and `malloc`/`free`.