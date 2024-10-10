#include <iostream>

int multiply(int a, int b) {
    return a * b;
}

int main() {
    int num1 = 7;
    int num2 = 5;
    int result = multiply(num1, num2);
    std::cout << "The product is: " << result << std::endl;
    return 0;
}