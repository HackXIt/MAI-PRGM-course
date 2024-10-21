# Templates

## Overview

Templates in C++ allow functions and classes to operate with generic types, enabling code reuse and flexibility.

## Function Templates

- **Definition**:

  ```cpp
  template <typename T>
  T functionName(T arg);
  ```

- **Usage**:

  ```cpp
  int result = functionName<int>(value);
  ```

- **Type Deduction**: The compiler can often deduce the template argument from the function arguments.

## Class Templates

- **Definition**:

  ```cpp
  template <typename T>
  class ClassName {
      T member;
  public:
      ClassName(T arg);
  };
  ```

- **Usage**:

  ```cpp
  ClassName<int> obj(10);
  ```

## Template Specialization

### Explicit Specialization

- **Purpose**: Provide a specific implementation for a particular type.

- **Syntax**:

  ```cpp
  template <>
  void functionName<int>(int arg) {
      // Specialized implementation for int
  }
  ```

### Partial Specialization

- **Purpose**: Specialize templates based on certain template parameters.

- **Applicable To**: Class templates, not function templates.

## Template Argument Deduction and SFINAE

### Template Argument Deduction

- **Mechanism**: Compiler deduces the template arguments from the function arguments.

### SFINAE (Substitution Failure Is Not An Error)

- **Purpose**: Enable or disable templates based on certain conditions without causing compilation errors.

- **Techniques**:

    - Use `std::enable_if`.
    - Utilize type traits from `<type_traits>`.

- **Example**:

  ```cpp
  template <typename T>
  typename std::enable_if<std::is_integral<T>::value, void>::type
  functionName(T arg) {
      // Implementation for integral types
  }
  ```

## Implementation

- **Function Templates**: [function\_templates.cpp](Templates/function_templates.cpp)
- **Class Templates**: [class\_templates.cpp](Templates/class_templates.cpp)
- **Template Specialization**: [template\_specialization.cpp](Templates/template_specialization.cpp)
- **Template Argument Deduction and SFINAE**: [template\_argument\_deduction.cpp](Templates/template_argument_deduction.cpp)