#include <iostream>

int main()
{
    std::cout << "/*";  // OK, "/*" is treated as a string literal
    std::cout << "*/";   // OK, "*/" is treated as a string literal
    std::cout << /* "*/" */";    // fix by adding second " before ';'
    std::cout << /* "*/ "/* "/*" */;  // OK. "/*" is treated as a string literal
}