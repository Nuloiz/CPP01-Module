#include <iostream>
#include <string>

int main(void){
	std::string s = "HI THIS IS BRAIN";
	std::string *stringPTR = &s;
	std::string &stringREF = s;

	std::cout << "Memory address:\n";
	std::cout << &s << "\n";
	std::cout << stringPTR << "\n";
	std::cout << &stringREF << "\n";
	std::cout << "Value:\n";
	std::cout << s << "\n";
	std::cout << *stringPTR << "\n";
	std::cout << stringREF << "\n";
	return (1);
}