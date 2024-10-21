# STL Algorithms

## Overview

The Standard Template Library provides a set of generic algorithms that can be used with containers and iterators.

## Common Algorithms

### `find`

- **Purpose**: Search for an element equal to a given value.

- **Usage**:

  ```cpp
  auto it = std::find(container.begin(), container.end(), value);
  ```

### `for_each`

- **Purpose**: Apply a function to each element in a range.

- **Usage**:

  ```cpp
  std::for_each(container.begin(), container.end(), [](Type& elem) {
      // Operation on elem
  });
  ```

### `copy`

- **Purpose**: Copy elements from one range to another.

- **Usage**:

  ```cpp
  std::copy(src.begin(), src.end(), dest.begin());
  ```

### `sort`

- **Purpose**: Sort elements in a range.

- **Usage**:

  ```cpp
  std::sort(container.begin(), container.end());
  ```

### `reverse`

- **Purpose**: Reverse elements in a range.

- **Usage**:

  ```cpp
  std::reverse(container.begin(), container.end());
  ```

## Iterators and Algorithms

- Algorithms operate on iterators, making them flexible and compatible with different containers.

- **Example**: Using `std::copy` with an `ostream_iterator` to output elements.

  ```cpp
  std::copy(vec.begin(), vec.end(), std::ostream_iterator<int>(std::cout, " "));
  ```

## Implementation

See [algorithms.cpp](algorithms.cpp) for code demonstrating various STL algorithms.