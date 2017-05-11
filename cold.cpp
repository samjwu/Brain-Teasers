#include <iostream>

int main() {
    int result = 0;
    int numtemps;
    std::cin >> numtemps;
    int temp;
    
    for (int i = 0; i < numtemps; i++) {
        std::cin >> temp;
        if (temp < 0) {
            result += 1;
        }
    }
    
    std::cout << result << std::endl;
    return 0;
}
