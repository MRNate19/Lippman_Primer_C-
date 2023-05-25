#include <iostream>

int main()
{
    /* Illegal: The first line is a complete statement, thus the second line
                expects a cout object and so does the third line.
    */
    std::cout << "The sum of " << v1;
              << " and " << v2;
              << " is " << v1 + v2 << std::endl;

    /* Remove the semi colon at the end of the first two lines and this program works fine :) */

}