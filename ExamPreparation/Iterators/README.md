## Iterators

- **Purpose**: Provide a way to access elements in a container sequentially.

- **Types**:

    - **Input Iterator**: Read from a sequence.
    - **Output Iterator**: Write to a sequence.
    - **Forward Iterator**: Read/write access, move forward.
    - **Bidirectional Iterator**: Move forward and backward.
    - **Random Access Iterator**: Full iterator arithmetic.

- **Usage**:

  ```cpp
  for (auto it = container.begin(); it != container.end(); ++it) {
      // Access *it
  }
  ```

- **Implementation**: [iterators.cpp](../Iterators/iterators.cpp)