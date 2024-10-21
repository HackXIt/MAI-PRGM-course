# RAII (Resource Acquisition Is Initialization)

## Overview

RAII is a programming idiom that ensures resource allocation is tied to object lifetime, thus guaranteeing resource release when the object goes out of scope.

## Principles

- **Resource Acquisition**: Acquire resources in the object's constructor.
- **Resource Release**: Release resources in the object's destructor.
- **Scope-Bound Resource Management**: Resources are automatically managed based on scope.

## Benefits

- **Exception Safety**: Resources are properly released even if an exception occurs.
- **Simplified Resource Management**: No need to manually manage resources.
- **Prevent Resource Leaks**: Ensures resources like memory, file handles, and locks are released.

## Common Use Cases

- **Smart Pointers**: Automatically delete dynamically allocated memory.
- **File Streams**: Close files when the stream object goes out of scope.
- **Mutex Locks**: Release locks when the lock object is destroyed.

## Implementation Example

```cpp
void writeToFile() {
    std::ofstream file("example.txt");  // Resource acquired
    if (file.is_open()) {
        file << "Hello, World!\n";
    }
}  // Resource automatically released when 'file' goes out of scope
```

## Implementation

See [raii.cpp](raii.cpp) for code demonstrating the RAII principle.