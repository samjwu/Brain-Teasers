#include <iostream>

int main() {
  int number;
  std::cin >> number;
  if (number % 2 == 0) {
    std::cout << "Bob" << std::endl;
  }
  else {
    std::cout << "Alice" << std::endl;
  }
  return 0;
}
