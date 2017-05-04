#include <iostream>

int main() {

  int contestants, problems;
  std::string description;
  std::cin >> contestants >> problems;

  for (int i = 0; i < contestants; i++) {
    std::cin >> description;
  }

  std::cout << problems << std::endl;

  return 0;
  }
