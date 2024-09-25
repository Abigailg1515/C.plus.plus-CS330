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


