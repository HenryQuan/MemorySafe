#pragma once

template <typename T>
class MemorySafe {
    T value1;
    T value2;
    // Swap value1 and value2 based on this flag
    bool flag = true;

public:
    MemorySafe(T value): value1(value) {}

    // value getter
    const T& get() const {
        if (flag) {
            return value1;
        } else {
            return value2;
        }
    };

    void update(const T& value) {
        if (flag) {
            value2 = value;
            // maybe set a random value here
        } else {
            value1 = value;
        }
        flag = !flag;
    }

    // implement for std::cout
    friend std::ostream& operator<<(std::ostream& os, const MemorySafe& ms) {
        os << ms.get();
        return os;
    }
};
