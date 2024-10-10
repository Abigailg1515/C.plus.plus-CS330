#include <iostream>
#include <string>
#include <utility> //for std::pair

//Factorial function
int factorial(int n) {
    if (n <= 1) {
        return(1);
    }
    return n * factorial(n - 1);
}

//String split function
std::pair<std::string, std::string> splitString(const std::string& str) {
    size_t mid = str.length() / 2;
    std::string firstPart = str.substr(0, mid);
    std::string secondPart = str.substr(mid);
    return std::make_pair(firstPart, secondPart);
}

int main() {
    //Call the factorial function
    int number = 5;
    int factorialResult = factorial(number);

    //Call the split string function
    std::string input = "HelloWorld";
    auto splitResult = splitString(input);

    //Output results
    std::cout << "Factorial of " << number << " is: " << factorialResult << std::endl;
    std::cout << "First part: " << splitResult.first << std::endl;
    std::cout << "Second part: " << splitResult.second << std::endl;

    return(0);
}
