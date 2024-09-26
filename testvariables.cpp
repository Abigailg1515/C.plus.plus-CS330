#include <iostream>
#include <string>
using namespace std;

int main() {
    //1. Basic data types
    int i = 10;
    float f = 3.5f;
    double d = 7.89;
    char c = 'A';
    bool b = true;
    string s = "123";

    //2. Operations on same data types
    // Arithmetic operations on int
    cout << "Int addition: " << i + 5 << endl; //15
    cout << "Int division: " << i / 3 << endl; //3 (integer division, truncates result)
    
    //Arithmetic operations on float
    cout << "Float multiplication: " << f * 2.0f << endl; // 7.0
    cout << "Float division: " << f / 2.0f << endl; // 1.75

    //3. Operations on different data types
    //Adding int and float - int gets promoted (widening conversion)
    float sum = i + f;
    cout << "Int + float = float: " << sum << endl; //13.5 (int i is promoted to float)

    //Division with different types
    double divisionResult = i / f;
    cout << "Int / float = double: " << divisionResult << endl; //2.85714

    //4. Arrays and Type Mixing
    //In C++, arrays are homogeneous, i.e., they hold only one type
    int arr[] = {1, 2, 3}; // Array of ints

    //C++ does not support arrays with mixed types directly, but you can use std::variant (C++17) or void pointers (unsafe)
    //Here's an example of mixing types in a container using std::vector and std::variant (C++17)
    //std::variant<int, float, string> v = 1;  //Example only with C++17 or higher

    //5. Type Conversion
    //Implicit conversion from int to float
    float convertedFloat = i;
    cout << "Implicit int to float conversion: " << convertedFloat << endl; //10.0

    //Explicit conversion (casting) from double to int
    int truncatedInt = (int)d; //Cast double to int (truncation)
    cout << "Explicit double to int conversion (truncated): " << truncatedInt << endl; //7

    //String to int conversion
    int stringToInt = stoi(s);
    cout << "String to int conversion: " << stringToInt << endl; // 123

    //Int to string conversion
    string intToString = to_string(i);
    cout << "Int to string conversion: " << intToString << endl; //"10"

    return 0;
}
