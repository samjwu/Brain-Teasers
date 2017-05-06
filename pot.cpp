#include <iostream>
#include <string>
#include <math.h>

int main() {

  int numlines;
  std::cin >> numlines;
  int nextinput;
  long long result = 0;

  for (int i = 0; i < numlines; i++) {
    std::cin >> nextinput;
    int base = static_cast<int> (nextinput / 10);
    int exponent = nextinput % 10;
    long long nextnum = pow(base, exponent);
    result += nextnum;
  }

  std::cout << result << std::endl;
  return 0;
}
