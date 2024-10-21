//
// Created by RINI on 21/10/2024.
//

#include <cstddef>

class String {
private:
    char* data;
    size_t length;

    size_t calculateLength(const char* str) const {
        size_t len = 0;
        while (str[len] != '\0') {
            len++;
        }
        return len;
    }

    void copyString(char* destination, const char* source) {
        size_t i = 0;
        while (source[i] != '\0') {
            destination[i] = source[i];
            ++i;
        }
        destination[i] = '\0';
    }

public:
    // Constructor
    String(const char* str = "") {
        length = calculateLength(str);
        data = new char[length + 1];
        copyString(data, str);
    }

    // Copy constructor
    String(const String& other) {
        length = other.length;
        data = new char[length + 1];
        copyString(data, other.data);
    }

    // Copy assignment operator
    String& operator=(const String& other) {
        if (this == &other) {
            return *this;
        }

        delete[] data;

        length = other.length;
        data = new char[length + 1];
        copyString(data, other.data);

        return *this;
    }

    // Move constructor
    String(String&& other) noexcept : data(other.data), length(other.length) {
        other.data = nullptr;
        other.length = 0;
    }

    // Move assignment operator
    String& operator=(String&& other) noexcept {
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
    ~String() {
        delete[] data;
    }

    // Overload += operator
    String& operator+=(const String& other) {
        append(other);
        return *this;
    }

    // Overload + operator
    String operator+(const String& other) const {
        String result(*this);
        result.append(other);
        return result;
    }

    // Append function
    void append(const String& other) {
        size_t newLength = length + other.length;
        char* newData = new char[newLength + 1];

        // Copy existing string
        for (size_t i = 0; i < length; i++) {
            newData[i] = data[i];
        }

        // Concatenate new string
        for (size_t i = 0; i < other.length; i++) {
            newData[length + i] = other.data[i];
        }

        newData[newLength] = '\0';  // Null-terminate

        delete[] data;
        data = newData;
        length = newLength;
    }

    // c_str() function
    const char* c_str() const {
        return data;
    }

    // Getter for length
    size_t getLength() const {
        return length;
    }
};
