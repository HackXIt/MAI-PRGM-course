//
// Created by RINI on 21/10/2024.
//

#include "String.h"

// Constructor with const char*
String::String(const char* str) {
    length = calculateLength(str);
    data = new char[length + 1];
    copyString(data, str);
}

// Copy constructor
String::String(const String& other) {
    length = other.length;
    data = new char[length + 1];
    copyString(data, other.data);
}

// Move constructor
String::String(String&& other) noexcept : data(other.data), length(other.length) {
    other.data = nullptr;
    other.length = 0;
}

// Copy assignment operator
String& String::operator=(const String& other) {
    if (this == &other) {
        return *this;
    }

    delete[] data;

    length = other.length;
    data = new char[length + 1];
    copyString(data, other.data);

    return *this;
}

// Move assignment operator
String& String::operator=(String&& other) noexcept {
    if (this == &other) {
        return *this;
    }

    delete[] data;

    data = other.data;
    length = other.length;

    other.data = nullptr;
    other.length = 0;

    return *this;
}

// Destructor
String::~String() {
    delete[] data;
}

// Append function
void String::append(const String& other) {
    size_t newLength = length + other.length;
    char* newData = new char[newLength + 1];

    for (size_t i = 0; i < length; i++) {
        newData[i] = data[i];
    }

    for (size_t i = 0; i < other.length; i++) {
        newData[length + i] = other.data[i];
    }

    newData[newLength] = '\0';  // Null-terminate

    delete[] data;
    data = newData;
    length = newLength;
}

// Overload += operator
String& String::operator+=(const String& other) {
    append(other);
    return *this;
}

// Overload + operator
String String::operator+(const String& other) const {
    String result(*this);
    result.append(other);
    return result;
}

// c_str() function to return C-style string
const char* String::c_str() const {
    return data;
}

// Getter for length
size_t String::getLength() const {
    return length;
}

// Helper function to calculate string length
size_t String::calculateLength(const char* str) const {
    size_t len = 0;
    while (str[len] != '\0') {
        len++;
    }
    return len;
}

// Helper function to copy a string
void String::copyString(char* destination, const char* source) {
    size_t i = 0;
    while (source[i] != '\0') {
        destination[i] = source[i];
        ++i;
    }
    destination[i] = '\0';
}

// Bidirectional iterator methods

// Constructor
String::Iterator::Iterator(char* p) : ptr(p) {}

// Dereference operator
char& String::Iterator::operator*() {
    return *ptr;
}

// Pre-increment operator
String::Iterator& String::Iterator::operator++() {
    ++ptr;
    return *this;
}

// Post-increment operator
String::Iterator String::Iterator::operator++(int) {
    Iterator temp = *this;
    ++ptr;
    return temp;
}

// Pre-decrement operator
String::Iterator& String::Iterator::operator--() {
    --ptr;
    return *this;
}

// Post-decrement operator
String::Iterator String::Iterator::operator--(int) {
    Iterator temp = *this;
    --ptr;
    return temp;
}

// Equality operator
bool String::Iterator::operator==(const Iterator& other) const {
    return ptr == other.ptr;
}

// Inequality operator
bool String::Iterator::operator!=(const Iterator& other) const {
    return ptr != other.ptr;
}

// begin() function
String::Iterator String::begin() {
    return Iterator(data);
}

// end() function
String::Iterator String::end() {
    return Iterator(data + length);
}
