#include <iostream>
#include <sstream>

int main() {
	std::string names;
	std::cin >> names;

	std::istringstream stringstream(names);

	std::string token;

	while (std::getline(stringstream, token, '-')) {
		std::cout << static_cast<char> (toupper(token[0]));
	}

	return 0;
}
