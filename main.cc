// regex_match example
#include <iostream>
#include <string>
#include <regex>
#include <iostream>
#include <fstream>
#include <algorithm>

int main(int argc, char ** argv)
{
    std::ifstream file;
	file.open (argv[1]);
	if (!file.is_open()) return 0;

	std::string line;
	if(getline(file, line)){
		// std::cout << line << std::endl;
		std::regex r("^(([a-z])+.)+[A-Z]([a-z])+$");
		// std::regex r("^(([a-z])+\.)+[A-Z]([a-zA-Z])+$");
		std::smatch m;
		std::regex_match(line, m, r);
    	for(auto v: m) std::cout << "# " << v << "|" << std::endl;
    }
    
}
