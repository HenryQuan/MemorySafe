#include <iostream>
#include "memory_safe.hpp"

int main() {
  MemorySafe<int> value(0);
  std::cout << "value: " << value << std::endl;
  
  value.update(value.unwrap() + 10);
  value = value.unwrap() + 100;
  std::cout << "value: " << value << std::endl;
  return 0;
}
