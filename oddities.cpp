#include <iostream>

int main() {
  int numlines;
  std::cin >> numlines;
  int numbers[numlines];

  for (int i = 0; i < numlines; i++) {
    std::cin >> numbers[i];
  }
  for (int i = 0; i < numlines; i++) {
    int number = numbers[i];
    if (number % 2 == 0) {
      std::cout << number << " is even" << std::endl;
    }
    else {
      std::cout << number << " is odd" << std::endl;
    }
  }

  return 0;
}
