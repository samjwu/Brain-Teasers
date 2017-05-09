#include <iostream>

int main() {
  int chessset[6] = {1, 1, 2, 2, 2, 8};
  int input;

  for (int i = 0; i < 6; i++) {
    std::cin >> input;
    if (i != 5) {
      std::cout << chessset[i] - input << " ";
    }
    else {
      std::cout << chessset[i] - input << std::endl;
    }
  }

  return 0;
}
