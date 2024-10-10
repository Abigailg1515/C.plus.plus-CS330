#include <iostream>
#include <string>
#include <utility> // for std::pair

std::pair<std::string, std::string> splitString(const std::string& str) {
    size_t mid = str.length() / 2;
    std::string firstPart = str.substr(0, mid);
    std::string secondPart = str.substr(mid);
    return std::make_pair(firstPart, secondPart);
}

int main() {
    std::string input = "HelloWorld";
    auto result = splitString(input);
    std::cout << "First part: " << result.first << std::endl;
    std::cout << "Second part: " << result.second << std::endl;
    return 0;
}
