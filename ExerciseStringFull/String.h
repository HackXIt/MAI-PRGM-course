//
// Created by RINI on 21/10/2024.
//

#ifndef STRING_H
#define STRING_H

#include <cstddef> // For size_t

class String {
private:
  char* data;
  size_t length;

  // Helper function to calculate string length
  size_t calculateLength(const char* str) const;

  // Helper function to copy a string
  void copyString(char* destination, const char* source);

public:
  // Constructor
  String(const char* str = "");

  // Copy constructor
  String(const String& other);

  // Move constructor
  String(String&& other) noexcept;

  // Copy assignment operator
  String& operator=(const String& other);

  // Move assignment operator
  String& operator=(String&& other) noexcept;

  // Destructor
  ~String();

  // Append function
  void append(const String& other);

  // Overload += operator
  String& operator+=(const String& other);

  // Overload + operator
  String operator+(const String& other) const;

  // c_str() function
  const char* c_str() const;

  // Getter for length
  size_t getLength() const;

  // Bidirectional iterator class
  class Iterator {
  private:
    char* ptr;
  public:
    Iterator(char* p);

    // Dereference operator
    char& operator*();

    // Pre-increment operator
    Iterator& operator++();

    // Post-increment operator
    Iterator operator++(int);

    // Pre-decrement operator
    Iterator& operator--();

    // Post-decrement operator
    Iterator operator--(int);

    // Equality operator
    bool operator==(const Iterator& other) const;

    // Inequality operator
    bool operator!=(const Iterator& other) const;
  };

  // begin() function
  Iterator begin();

  // end() function
  Iterator end();
};

#endif // STRING_H
