# Rule of Three, Five, and Zero

## Overview

These rules provide guidelines on when to explicitly define special member functions in your classes.

## Rule of Three

- **Applies When**: Your class manages resources (e.g., dynamic memory).
- **Members to Define**:
    1. **Destructor**: To release resources.
    2. **Copy Constructor**: To handle copying of resources.
    3. **Copy Assignment Operator**: To assign resources from one object to another.

## Rule of Five

- **Extends Rule of Three**: Includes move semantics.
- **Additional Members to Define**:
  4\. **Move Constructor**: To transfer resources during initialization.
  5\. **Move Assignment Operator**: To transfer resources during assignment.

## Rule of Zero

- **Applies When**: Your class does not manage resources.
- **Guideline**: Do not define any special member functions; use compiler-generated defaults.

## Best Practices

- **Consistency**: Ensure that resource management is correctly handled in all scenarios.
- **Avoiding Bugs**: Properly implementing these functions prevents resource leaks and undefined behavior.

## Implementation

See [rule\_of\_three\_five\_zero.cpp](RuleOfThreeFiveZero/rule_of_three_five_zero.cpp) for examples demonstrating when to implement or omit special member functions.