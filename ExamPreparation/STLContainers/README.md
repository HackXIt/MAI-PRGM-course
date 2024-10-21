# Standard Template Library (STL) Containers

## Overview

STL provides a set of commonly used containers that implement various data structures, such as arrays, linked lists, trees, and hash tables.

## Containers

### Vector

- **Type**: Dynamic array.

- **Features**:

    - Fast random access.
    - Efficient insertion/removal at the end.

- **Usage**:

  ```cpp
  std::vector<int> vec = {1, 2, 3};
  vec.push_back(4);
  ```

- **Implementation**: [vector\_example.cpp](vector_example.cpp)

### List

- **Type**: Doubly linked list.

- **Features**:

    - Efficient insertion/removal anywhere.
    - No random access.

- **Usage**:

  ```cpp
  std::list<int> lst = {1, 2, 3};
  lst.push_front(0);
  ```

- **Implementation**: [list\_example.cpp](list_example.cpp)

### Set

- **Type**: Ordered collection of unique elements.

- **Features**:

    - Fast lookup, insertion, and deletion.
    - Elements are sorted.

- **Usage**:

  ```cpp
  std::set<int> s = {3, 1, 2};
  s.insert(4);
  ```

- **Implementation**: [set\_example.cpp](set_example.cpp)

### Map

- **Type**: Associative array (key-value pairs).

- **Features**:

    - Fast retrieval based on keys.
    - Keys are unique and sorted.

- **Usage**:

  ```cpp
  std::map<std::string, int> m;
  m["Alice"] = 30;
  ```

- **Implementation**: [map\_example.cpp](map_example.cpp)

### Unordered Map

- **Type**: Hash table implementation of map.

- **Features**:

    - Faster access for large datasets.
    - Keys are not sorted.

- **Usage**:

  ```cpp
  std::unordered_map<std::string, int> um;
  um["Bob"] = 25;
  ```

- **Implementation**: [unordered\_map\_example.cpp](unordered_map_example.cpp)