#include <iostream>

int main() {
  int fizz, buzz, lines;
  std::cin >> fizz >> buzz >> lines;

  for (int i = 1; i <= lines; i++) {
    if ((i % fizz) == 0 && (i % buzz) == 0) {
      std::cout << "FizzBuzz\n";
    }
    else if ((i % fizz) == 0) {
      std::cout << "Fizz\n";
    }
    else if ((i % buzz) == 0) {
      std::cout << "Buzz\n";
    }
    else {
      std::cout << i << "\n";
    }
  }
  return 0;
}
