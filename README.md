# PLP 1

## History
Name: C++ Scripting Language

C++ was created by the Danish developer Bjarne Stroustrup in 1979 but wasn't released to the public until 1983. Stroustrup created the language at AT&T Bell Laboratories as an extension of the C language. His goal was to create an efficient and flexible language that could provide stronger features for program organization. 

C++ is an object-oriented programming language and is mainly used in creating large-scale operations. Mainly, compilers, cloud storage, databases, game dev, and graphic designs.

I plan to learn C++ through the usage of video platforms (YouTube), books, and public websites with the guidance of the computer science faculty at Simmons University.

## Getting Started

Install: I started the installation process with a recommended YouTube video from my peer that was vetted by my professor. My installation of C++ took place entirely in VS Code (Coding Platform) through C++ extension packs. 

Visual Studio Code is a widely used integrated development environment (IDE) for developing C++ code, so I will be learning C++ in VS code because this is the only IDE I have programmed and is suitable for learning C++.

Running C++: You need a compiler and a C++ program file with a .cpp extension. First, you need to open a terminal window and ensure that the correct file path is mentioned. Make sure you save your file and then you can run your program. An example of a basic "Hello World" program will be listed below. 

Commenting: A single-line comment is down through a double slash (//) and a multi-line comment is done through a slash and asterisk before and after the comment (/* comment */). 

Hello World Code Below:
```
#include <iostream>
using namespace std;
int main()
{
    cout << "Hello World";
}
```
# PLP 2

## Data Types

### Primitive (built-in) Data Types

#### Integer:

The keyword for an integer is "int" and integers typically require 4 bytes of memory space. The typical range is from -2147483648 to 2147483648

#### Character:

The keyword for the character data type is "char" and characters typically require 1 byte of memory space. The typical range is -128 to 127 or 0 to 255

#### Boolean:

The Boolean data type is used for storing boolean or logical values, either "true" or "false". The keyword for the Boolean data type is "bool"

#### Floating Point:

The floating point data type stores single-precision floating-point values or decimal values. The keyword used for this data type is "float" and usually requires 4 bytes of memory space

#### Double Floating Point:

The double floating point data type stores double-precision floating-point values or decimal values. The keyword used for this data type is "double" and usually requires 8 bytes of memory space

#### Valueless or Void:

The term void means without any value, which means that a void data type represents a valueless entity. A void data type is used for those function which does not return a value

#### Wide Character:

The wide-character data type is also a character data type, but this data type has a size that is greater than the normal 8-bits. Wide characters are represented by 'wchar_t" and are 2-4 bytes long typically 

### Derived Data Types

#### Function:

A function is a block of code or segment of a larger program that is defined to execute a well-defined task. The goal of a function is to save the programmer from re-writing the same lines of code over and over again. All lines of code are put into a specific function and this can be called from anywhere that is required. main() is the default function that is defined in every C++ program.

Syntax:
```
FunctionType
FunctionName(parameters)
```

#### Array:

An array is a collection of items stored at continuous memory locations. An array is to represent many instances in one variable. 

Syntax:
```
DataType
ArrayName[size_of_array];
```

#### Pointer:

Pointers are symbolic representations of addresses. Enable programs to simulate call-by-reference as well as to create/manipulate dynamic data structures.

Syntax:
```
datatype *var_name;
```

#### Reference:

A variable declared as a reference becomes an alternative name for an existing variable. A variable can be declared as a reference by using a '&' in the declaration.

Syntax:
```
data_type &ref = variable;
```

### User-defined Data Types

#### Class:
#### Structure:
#### Union:
#### Enumeration:
#### Typedef Defined Datatype:

## Data Type Discussion

A reserved word is a word that cannot be used as an identifier, such as the name of a variable, function, or label. It is "reserved from use" and C++ has approximately 60 reserved words. About half of them were present in the C programming language and just carried over, while the other half are new reserved words just in C++. There are a few more naming requirements for variables in C++ other than their inability to be a reserved word.

Naming Requirements:

1. Names can contain letters, digits, and underscores
2. Names must begin with a letter or an underscore (_)
3. Names are case-sensitive (myVar and myvar are different variables)
4. Names cannot contain whitespaces or special characters like !, #, %, etc
5. Reserved words (like C++ keywords, such as int) cannot be used as names

Naming Conventions:

1. The class name should be a noun
2. Use uppercase letters as word separators and lowercase for the rest of the word in the class name
3. The first character in the class name should be uppercase
4. No underscores ('_') are permitted in the class name
5. The private attribute name in class should be prepended with the character 'm'
6. Character 'm' preceds other name modifiers
7. Each method or function should begin with a verb
8. The first character of a function argument should be lowercase, all words after the first letter should be in uppercase with class names
9. The variable name should begin with an alphabet
10. Digits may be used, but after alphabets in variable names
11. Pointer variables shpould be prepended with 'p' and place the asterisk '*' close to the variable name instead of the pointer type
12. Reference variables should be prepended with 'r'
13. Static variables should be prepended with 's'
14. The global constants should be all capital letters separated with '_'
15. No special character is allowed in the file name except for ('_') and dash ('-')
16. The file name should end with the .cc extension in tehe end or should end with the .cpp extension
17. Do not use filenames that already exist in /user/include or any predefined header file name

These standards are mixed between being enforced by the compiler and just standards in the coding community. If the specific standard is enforced by the compiler, your IDE may flag it as an error for you. Standards in the community are put in place to increase readability and ensure uniformity, your IDE may let you ignore these community standards and compile just fine without following them. Though the code may compile, following community standards is in your best interest.

C++ is statically typed, meaning variables are bound to a data type during compilation. Also meaning the programmer has to declare the type of the variable when it is originally declared. Eg: Data_type variable_name.

A strongly typed language is described as demanding specification of data types. A weakly typed or loosely typed language is described as does NOT require specification when it comes to different types of objects and variables. C++ is generally (mostly) considered strongly typed because variable type must be specified. C++ could be considered weakly typed because of the users ability to convert data types without a cast (special operator that forces data conversion) and without compiler errors.

C++ is explicitly typed, this means that you must declare the type of each variable when you define it. This makes the code clearer regarding what types of data are being used and you generally need to declare your variable types, function parameters, and return values. Conversely, dynamic languages like Python and Ruby are more relaxed and implicit. You typically don’t need to explicitly declare variable types, function parameters, or return values.

A mutable object can be changed after it's created, and an immutable object can't. By default, all objects are mutable in C++, but there are keywords such as const that can make them immutable, and the mutable keyword that can make immutable variables mutable.

An operator is a symbol that operates on a value to perform a specific mathematical or logical computation. These form the foundation of any programming language, but are built into C++ to provide the required level of functionality. The operators used in C++ can be classified into 6 types.

#### Arithmetic Operators:

These operators are used to perform arithmetic or mathematical operations on the operands. Arithmetic operators can be classified into two types with those being Unary Operators and Binary Operators. Unary Operators work with a single operand, for example (Increment'++') and (Decrement'--'). Binary operators work with two operands, for example (Addition'+') and (Subtraction'-')

#### Assignment Operators:

Used to assign value to a variable. The left side operand of the assignment operator is a variable and the right side operand of the operator is the value. The value on the right must be the same data type as the variable on the left, otherwise there will be a compiler error.

#### Relational Operators:

These operators are used for the comparison of the values of two operands. For example, '<' checks if one operand is less than the other operand. The result returns a Boolean (True or False).

#### Logical Operators:

These operators are used to combine two or more conditions/constraints. They could also be used to complement the evaluation of the original condition in consideration. The result returns a Boolean value (True or False).

#### Bitwise Operators:

Used to perform bit-level operations on the operands. THe operators are first converted to bit-level, then the calculation is performed. These operators can be used for mathematical operations, such as addition, subtraction, etc

#### Ternary/Conditional Operators:

The ternary operator ('?') determines the answer on the basis of the evaluation of Expression1. If true, Expression2 gets evaluated and is used as the answer for the expression. If Expression1 is false, then Expression3 gets evaluated and is used as the answer for the expression. This operator takes three operands, which is why it is known as the Ternary Operator.

Mixed type operations are allowed in C++. In C++, you can perform operations between different types (e.g., int, float, double, etc.), and the compiler will automatically handle type conversion based on the rules of type promotion and type conversion.

In C++, the binding of identifier names (variables, functions, etc.) and operator symbols occurs at different stages depending on whether it's compile-time or runtime binding:

#### Identifier Names:
Compile-time binding: Most identifiers (e.g., variables, non-virtual functions, classes) are resolved at compile-time when the compiler determines their meaning.
Runtime binding: Virtual functions in polymorphism are resolved at runtime based on the actual object type.
#### Operator Symbols:
Compile-time binding: Operators for basic types and most overloaded operators are resolved at compile-time.
Runtime binding: Virtual operators (in inheritance) can be bound at runtime, though this is less common.
Most identifiers and operators in C++ are bound at compile-time, with runtime binding used for polymorphism and virtual functions.

## Code Illustration

In C++, the line x = "5" + 6; will not compile as written. This is because C++ does not support adding a string literal ("5") and an integer (6) directly.

Reason for Compilation Failure:
String Literal as a Pointer: In C++, a string literal like "5" is actually a constant character array, and the expression "5" decays to a pointer to the first character (type const char*).
Invalid Pointer Arithmetic: The expression "5" + 6 attempts to add an integer (6) to a pointer (const char*), which would result in pointer arithmetic. It would offset the pointer to point to the 7th character in the string, but since the string "5" has only one character, this results in undefined behavior.

#### Fix For C++
```
#include <iostream>
#include <string>
using namespace std;

int main() {
    string str = "5";
    int x = stoi(str) + 6;  // Convert "5" to integer and add 6
    cout << x << endl;      // Output: 11
    return 0;
}
```
#### Limitations of C++ + Complex (built-in) Data Types:

Adding Ints and Floats: C++ allows implicit widening conversion when adding an int to a float (e.g., int + float results in float), ensuring precision is maintained.

Storing Different Types in Lists: C++ arrays and containers are homogeneous, meaning they only store one type. Mixed types can be handled using std::variant or std::any (C++17), but this adds complexity.

Type Conversion: C++ supports implicit conversions (e.g., int to float), but explicit casting is required for narrowing conversions (e.g., float to int).

Pitfalls: Implicit conversions can sometimes lead to unexpected results, and managing mixed types in containers can make the code harder to maintain.

Built-in Complex Data Types: C++ provides versatile data types like std::string, std::vector, std::pair, std::tuple, and associative containers (std::map, std::set), which simplify handling complex data structures in a type-safe manner.

# PLP 3

## Functions

#### Function Declaration:

The syntax for a function declaration is {return_type function_name(parameter_list);}

#### EXAMPLE
```
int add(int x, int y)
```
In the example above, int is the return type and add is the function name. int x and int y are a part of the function parameter list. [2]

#### Function Placement

In general, we need to make sure that functions are declared before they are used in C++, unless we implemented a function prototype at the top of the file or before you use that function. Functions that are meant to be methods of a class should be placed inside the class definition, unless you are implementing a member function. A member function allows a method to be defined outside of a class, but still must be declared inside the class. 

#### Example of outside class definition using member function:
```
#include <iostream>

class Dog {
public:
    void bark();  // Function declaration inside the class
};

// Function definition outside the class
void Dog::bark() {
    std::cout << "Woof!" << std::endl;
}

int main() {
    Dog myDog;
    myDog.bark();
}
```
In larger C++ projects, it's common to place function declarations (prototypes) in header files (.h or .hpp files) and function definitions in source files (.cpp files). This promotes modularity and reusability of code.

#### Dog.h
```
class Dog {
public:
    void bark();  //Function prototype
};
```
#### Dog.cpp
```
#include "Dog.h"
#include <iostream>

void Dog::bark() {
    std::cout << "Woof!" << std::endl;
}
```
#### Main.cpp
```
#include "Dog.h"

int main() {
    Dog myDog;
    myDog.bark();
}
```
Static functions can be defined in a .cpp file, but they will be limited to the file scope (i.e. they are not accessible outside that file). Inline functions are small functions defined directly in the header or within a class, and the compiler can expand them directly at the point of call to avoid the overhead of function calls.

#### Static + Inline
```
static int multiply(int a, int b) {
    return a * b;
}
inline int square(int x) {
    return x * x;
}
```
Finally, The order of parameters and the return type in the function prototype must exactly match the definition and usage.

INFORMATION FROM FUNCTION PLACEMENT + STATIC V INLINE SECTIONS CAME FROM SOURCES [2, 3, 4, 5]

#### Recursion

"C++ does support recursion. Recursion is a method in C++ which calls itself directly or indirectly until a suitable condition is met. In this method, we repeatedly call the function within the same function, and it has a base case and a recursive condition. The recursive condition helps in the repetition of code again and again, and the base case helps in the termination of the condition. If there is no base case in the recursive function, the recursive function will continue to repeat continuously." [6]

#### Simplilearn Example:
```
int recursion(n)
{
 if(n==0)
 {
 return;
 }
 return(n-1);
}
```

#### Parameters + Data Types:

C++ can accept as mamy parameters as you want, but you need to rememeber their order when you call the function. The parameters can be of different data types, but a function in C++ can only return one data type. [7][8]

#### Returning Multiple Values
In C++, you can not DIRECTLY return multiple values at the same time, but there are ways around this problem. The solutions involves pointers, structures, and arrays. For the sake of space, I'm going to put one example below. The rest of the examples and information can be found at source [9].

POINTER EXAMPLE:
```
// Modified program using pointers
#include <iostream>
using namespace std;
 
// add is the short name for address
void compare(int a, int b, int* add_great, int* add_small)
{
    if (a > b) {
 
        // a is stored in the address pointed
        // by the pointer variable *add_great
        *add_great = a;
        *add_small = b;
    }
    else {
        *add_great = b;
        *add_small = a;
    }
}
 
// Driver code
int main()
{
    int great, small, x, y;
 
    cout << "Enter two numbers: \n";
    cin >> x >> y;
 
    // The last two arguments are passed
    // by giving addresses of memory locations
    compare(x, y, &great, &small);
    cout << "\nThe greater number is " << great << " and the smaller number is "
      << small;
 
    return 0;
}
 
// This code is contributed by sarajadhav12052009
// From geeks for geeks
```

#### Pass By Reference vs. Pass By Value

C++ is pass by value by default, but it is capable of pass by reference. [10] 

#### Argument + Parameters + Local Variable Storage

"Local variables (i.e. those that are declared inside methods) are stored on the stack. This means their values are stored on the stack, therefore meaning that local reference type variables have references stored on the stack and local value type variables have actual values stored on the stack." [11]

In C++, arguments and parameters are typically managed on the stack. When a function is called, the arguments are pushed onto the stack, and the function parameters reference these values. If an argument is a primitive type, the actual value is stored on the stack. If it is an object or a reference type, a reference (or pointer) to the object on the heap may be stored on the stack instead.

#### Scoping Rules

There are five types of scopes in C++:

Function
File
Block
Function Prototype
Class

https://sites.google.com/site/computerbookscentre/scope-rules#

# PLP 4

## If/Else, Switch, & Logical Operators

1. Boolean Values in C++

    Values: true and false (case-sensitive). They are keywords representing 1 and 0, respectively, under the hood.

2. Conditional Statements in C++

    Supported Statements:
        if / else
        if / else if / else
        switch / case / default
   
    Other Features:
        No native unless, but logical negation (!) can mimic it: if (!(x > 0)).

3. Code Block Delimitation

    Code blocks under conditions are enclosed in curly braces {}.
    Single-line statements can omit braces, though it's not recommended:
    ```
    if (x > 0) cout << "Positive" << endl;
    ```
4. Short-Circuit Evaluation

    Behavior: C++ evaluates logical operators && (AND) and || (OR) in a short-circuit manner:
        For ||, evaluation stops if the first condition is true.
        For &&, evaluation stops if the first condition is false.
    Example:
    ```
    int a = 5;
    if (a > 0 || (10 / a > 2)) { // Second part isn't evaluated because a > 0 is true.
    cout << "Short-circuit prevents errors." << endl;
    }
    ```
5. Dangling Else Problem

    Issue: When nested if/else statements lack braces, the else may associate with the wrong if.
    Solution: Use braces to clearly associate blocks:
    ```
    if (x > 0) {
    if (y > 0) {
        cout << "Both are positive" << endl;
    }
    } else {
    cout << "At least one is non-positive" << endl;
    }
    ```
6. Switch/Case in C++

    Break: Required to exit a case; otherwise, execution "falls through" to subsequent cases.
    Continue: Not applicable to switch. C++ switch evaluates only one condition per execution cycle.
    Example:
   ```
   switch (choice) {
    case 1:
        cout << "Case 1" << endl;
        break;
    case 2:
        cout << "Case 2" << endl;
        break;
    default:
        cout << "Default case" << endl;
    }
    ```
7. Why C++ Lacks Functional Language Alternatives

    Functional languages use expressions rather than statements for control flow, as they favor immutability and recursion.
    C++ is imperative, emphasizing explicit flow control with if/else and switch.

# PLP 5
   
## Classes and Inheritance

C++ is an object-oriented programming language therefore it fully supports the implementation of objects. Class names should use Pascal case for class names, while object and variable names use Camel case. Functions and methods also use Camel case.

C++ does not have standard built-in methods, however, C++ has a few workarounds.  

C++ supports inheritance and multiple inheritance. In single inheritance, a class (the derived class) inherits from one base class. The derived class gains access to the public and protected members of the base class, allowing code reuse and establishing a hierarchical relationship. C++ supports multiple inheritance, which allows a derived class to inherit from more than one base class. This is not available in many OOP languages due to potential complexities (such as the "diamond problem").

Method Resolution in C++

Method Overriding: Use the virtual keyword in base classes to allow derived classes to override methods. Calls to virtual functions are resolved at runtime based on the object type, enabling polymorphism.
Method Overloading: A derived class can define methods with the same name as in the base class but with different parameters. Both base and derived overloads are accessible unless they are hidden.
Name Hiding: If a derived class defines a method with the same name as a base class method, it hides all base versions. The hidden methods can still be accessed with the Base::method syntax.

Memory Management: C++ supports both automatic (stack) and dynamic (heap) allocation. Destructors clean up resources when objects go out of scope, but dynamically allocated memory must be manually managed to prevent leaks.
Polymorphism: Virtual functions allow runtime polymorphism. Using virtual in-base classes enables derived classes to override methods, with override and final keywords improving clarity and safety.
Multiple Inheritance & Virtual Inheritance: C++ supports multiple inheritance, which can cause ambiguity (the "diamond problem"). Virtual inheritance prevents this by creating a single shared instance of the base class.
Copy and Move Semantics: To manage resources correctly, define a copy constructor, copy assignment operator, destructor, and optionally a move constructor and move assignment (the Rule of Three/Five).
Templates: C++ supports generic programming with templates, allowing flexible and reusable classes and functions.
Object Slicing: Assigning a derived object to a base object slices off the derived part. Use pointers or references to avoid slicing in polymorphic contexts.













## Sources

1. <https://www.techtarget.com/searchdatamanagement/definition/C#:~:text=C%2B%2B%20is%20an%20object%2Doriented,superset%20of%20the%20C%20language.>
2. <https://blog.hubspot.com/website/call-a-function-in-c#:~:text=C%2B%2B%20Function%20Declarations%20%26%20Definitions&text=The%20syntax%20for%20a%20function,x”%20and%20“y.”>
3. <https://www.geeksforgeeks.org/functions-in-cpp/>
4. <https://en.cppreference.com/w/>
5. <https://www.tutorialspoint.com/cplusplus/cpp_functions.htm>
6. <https://www.simplilearn.com/tutorials/cpp-tutorial/what-is-recursion-in-cpp#:~:text=A%20function%20in%20C%2B%2B,a%20certain%20condition%20is%20met.>
7. <https://www.tutorialspoint.com/cplusplus/cpp_multiple_function_parameters.htm#:~:text=C%2B%2B%20multiple%20function%20parameters%20describe,subset%20of%20data%20at%20once.>
8. <https://www.udacity.com/blog/2021/09/developers-guide-to-cpp-function-parameters.html#:~:text=As%20with%20the%20function%20itself,same%20data%20type%20for%20all.>
9. <https://www.geeksforgeeks.org/how-to-return-multiple-values-from-a-function-in-c-or-cpp/>
10. <https://medium.com/@saumyapathak2011/pass-by-value-vs-pass-by-reference-once-and-for-all-41c056d684d0>
11. <https://endjin.com/blog/2022/07/understanding-the-stack-and-heap-in-csharp-dotnet#:~:text=Local%20variables%20(i.e.%20those%20that,values%20stored%20on%20the%20stack.>










