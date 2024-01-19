// Here are examples of both character arrays (C-style strings) and `std::string` in C++:

// 1. Character Array (C-Style String):

// ```cpp
// #include <iostream>
// #include <cstring> // Required for C-style string functions

// int main() {
//     // Define a character array to store a C-style string
//     char cString[] = "Hello, World";

//     // Print the C-style string
//     std::cout << "C-Style String: " << cString << std::endl;

//     // Modify the C-style string
//     cString[5] = '\0'; // Truncate the string
//     std::cout << "Modified C-Style String: " << cString << std::endl;

//     return 0;
// }
// ```

// In this example, we declare a character array `cString` to store a C-style string, print it, and then truncate it by replacing characters with a null character.

// 2. `std::string`:

// ```cpp
// #include <iostream>
// #include <string> // Required for std::string

// int main() {
//     // Define an std::string
//     std::string str = "Hello, World";

//     // Print the std::string
//     std::cout << "std::string: " << str << std::endl;

//     // Modify the std::string
//     str = "Hello, C++"; // Assign a new value to the std::string
//     std::cout << "Modified std::string: " << str << std::endl;

//     return 0;
// }
// ```

// In this example, we declare an `std::string` called `str`, print it, and then modify it by assigning a new value to the string. Note that you don't need to worry about memory management or null-termination when working with `std::string`.