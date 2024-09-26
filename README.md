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


## Sources

1. 










