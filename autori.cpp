#include <iostream>
#include <sstream>

int main() {
	std::string input;
	std::cin >> input;

	// http://www.cplusplus.com/reference/sstream/istringstream/
	// http://www.cplusplus.com/reference/sstream/istringstream/istringstream/
	std::istringstream names(input);

	std::string singlename;

	// http://www.cplusplus.com/reference/istream/istream/getline/
	while (std::getline(names, singlename, '-')) {
		std::cout << static_cast<char> (toupper(singlename[0]));
	}

	return 0;
}
