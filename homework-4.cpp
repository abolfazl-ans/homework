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
        std::cout << "index " << i << ": " << tokens[i].length() << " len" << std::endl;
    }

    return 0;
}