#include <iostream>
#include <sstream>
#include <vector>

int main() {
    std::string input;
    std::getline(std::cin, input);

    std::stringstream ss(input);
    std::string token;
    std::vector<std::string> tokens;

    while (std::getline(ss, token, ',')) {
        tokens.push_back(token);
    }

    for (int i = 0; i < tokens.size(); i++) {
        std::cout << "index " << i << ": " << tokens[i] << std::endl;
    }

    std::cout << " " << std::endl;

    std::string output = tokens[0];
    for (int i = 1; i < tokens.size(); i++) {
        output += "@" + tokens[i];
    }

    std::cout << output << std::endl;

    return 0;
}