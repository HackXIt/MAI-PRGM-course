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
    // Constructor, destructor, etc...

    // Bidirectional iterator class
    class Iterator {
    private:
        char* ptr;

    public:
        Iterator(char* p) : ptr(p) {}

        // Dereference operator
        char& operator*() {
            return *ptr;
        }

        // Pre-increment operator
        Iterator& operator++() {
            ++ptr;
            return *this;
        }

        // Post-increment operator
        Iterator operator++(int) {
            Iterator temp = *this;
            ++ptr;
            return temp;
        }

        // Pre-decrement operator
        Iterator& operator--() {
            --ptr;
            return *this;
        }

        // Post-decrement operator
        Iterator operator--(int) {
            Iterator temp = *this;
            --ptr;
            return temp;
        }

        // Equality operator
        bool operator==(const Iterator& other) const {
            return ptr == other.ptr;
        }

        // Inequality operator
        bool operator!=(const Iterator& other) const {
            return ptr != other.ptr;
        }
    };

    // begin() function
    Iterator begin() {
        return Iterator(data);
    }

    // end() function
    Iterator end() {
        return Iterator(data + length);
    }
};
