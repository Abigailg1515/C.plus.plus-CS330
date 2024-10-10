#include <iostream>

void passByValue(int num) {
    num += 10; //This change won't affect the original variable
}

void passByReference(int& num) {
    num += 10; //This change will affect the original variable
}

int main() {
    int value = 5;
    passByValue(value);
    std::cout << "After Pass By Value: " << value << std::endl; //Output: 5

    passByReference(value);
    std::cout << "After Pass By Reference: " << value << std::endl; //Output: 15

    return(0);
}
