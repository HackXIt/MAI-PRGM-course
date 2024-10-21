//
// Created by RINI on 21/10/2024.
//

#include <cstddef>

class String {
private:
    char* data;
    size_t length;

    // Helper function to calculate string length
    size_t calculateLength(const char* str) const {
        size_t len = 0;
        while (str[len] != '\0') {
            len++;
        }
        return len;
    }

    // Helper function to copy a string
    void copyString(char* destination, const char* source) {
        size_t i = 0;
        while (source[i] != '\0') {
            destination[i] = source[i];
            ++i;
        }
        destination[i] = '\0';
    }

public:
    // Constructor with const char*
    String(const char* str = "") {
        length = calculateLength(str);
        data = new char[length + 1];
        copyString(data, str);
    }

    // Destructor
    ~String() {
        delete[] data;
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

    // c_str() function to return C-style string
    const char* c_str() const {
        return data;
    }

    // Getter for length
    size_t getLength() const {
        return length;
    }
};
