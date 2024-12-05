#include <iostream>
using namespace std;

int main() {
    int x = 5, y = 10;

    //1. One-condition if/else statement
    if (x > 0) {
        cout << "x is positive" << endl;
    } else {
        cout << "x is non-positive" << endl;
    }

    //2. Multi-condition if/else statement
    if (x > 0 && y < 20) {
        cout << "x is positive, and y is less than 20" << endl;
    } else {
        cout << "Either x is not positive or y is not less than 20" << endl;
    }

    //3. if/elif/else statements
    if (x == y) {
        cout << "x equals y" << endl;
    } else if (x > y) {
        cout << "x is greater than y" << endl;
    } else {
        cout << "x is less than y" << endl;
    }

    //4. Short-circuit logic
    if (x > 0 || (y / x > 10)) { // Short-circuit: second condition won't be evaluated if x > 0
        cout << "Short-circuit logic works" << endl;
    }

    //5. Switch-case statement
    int choice = 2;
    switch (choice) {
        case 1:
            cout << "Choice is 1" << endl;
            break;
        case 2:
            cout << "Choice is 2" << endl;
            break;
        case 3:
            cout << "Choice is 3" << endl;
            break;
        default:
            cout << "Invalid choice" << endl;
    }

    return 0;
}
