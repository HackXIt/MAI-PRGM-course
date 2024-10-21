# Stack vs. Heap

## Overview

Memory in C++ is managed in two primary areas: the stack and the heap. Understanding the differences is essential for resource management and performance optimization.

## Stack Memory

- **Characteristics**:
    - Automatic storage duration.
    - Fast allocation and deallocation.
    - Limited size.
- **Usage**:
    - Local variables.
    - Function parameters.
- **Scope**:
    - Variables are destroyed when they go out of scope.

## Heap Memory

- **Characteristics**:
    - Dynamic storage duration.
    - Managed manually using `new` and `delete`.
    - Larger in size compared to the stack.
- **Usage**:
    - Objects that need to persist beyond the scope they were created in.
    - Large data structures.
- **Responsibility**:
    - Programmer must manage allocation and deallocation to prevent leaks.

## Performance Considerations

- **Stack Allocation**: Faster due to simple pointer arithmetic.
- **Heap Allocation**: Slower due to complex bookkeeping.

## Implementation

See [stack\_heap.cpp](stack_heap.cpp) for examples of allocating memory on the stack and heap.