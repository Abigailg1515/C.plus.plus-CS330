#include <iostream>

int factorial(int n) {
    //Base case: factorial of 0 = 1
    if (n <= 1) {
        return 1;
    }
    //Recursive case
    return n * factorial(n - 1);
}

int main() {
    int number = 5;
    int result = factorial(number);
    std::cout << "Factorial of " << number << " is: " << result << std::endl;
    return 0;
}
