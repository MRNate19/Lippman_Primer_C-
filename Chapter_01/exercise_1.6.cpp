#include <iostream>

int main()
{
    /* Illegal: The first line is a complete statement, and thus the second line
                expects a cout object.
    */
    std::cout << "The sum of " << v1;
              << " and " << v2;

}