#include <iostream>
#include "memory_safe.hpp"

const int DEFAULT_VALUE = 10;

int main() {
    std::cout << "Memory Safe Demo" << std::endl;

    int unsafe_value = DEFAULT_VALUE;
    MemorySafe<int> safe_value(DEFAULT_VALUE);

    std::cout << "safe_value: " << safe_value << std::endl;
    std::cout << "unsafe_value: " << unsafe_value << std::endl;
    // wait for user to finish memory searching
    std::cin.get();

    // change the value of unsafe_value
    safe_value.update(safe_value.get() + 10);
    unsafe_value += 10;
    std::cout << "safe_value: " << safe_value << std::endl;
    std::cout << "unsafe_value: " << unsafe_value << std::endl;
    // wait for user to finish memory searching
    std::cin.get();

    // change the value of unsafe_value
    safe_value.update(safe_value.get() + 100);
    unsafe_value += 100;
    std::cout << "safe_value: " << safe_value << std::endl;
    std::cout << "unsafe_value: " << unsafe_value << std::endl;
    // wait for user to finish memory searching
    std::cin.get();

    return 0;
}
