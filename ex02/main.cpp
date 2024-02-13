#include <iostream>
#include <string>

int main(void){
	std::string s = "HI THIS IS BRAIN";
	std::string *stringPTR = &s;
	std::string &stringREF = s;

	std::cout << "Memory address:\n";
	std::cout << "s" << &s << "\n";
	std::cout << "stringPTR" << stringPTR << "\n";
	std::cout << "stringREF" << &stringREF << "\n";
	std::cout << "Value:\n";
	std::cout << "s" << s << "\n";
	std::cout << "stringPTR" << *stringPTR << "\n";
	std::cout << "stringREF" << stringREF << "\n";
	return (1);
}