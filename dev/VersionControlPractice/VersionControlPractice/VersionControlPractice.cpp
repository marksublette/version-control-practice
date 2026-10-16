#include <iostream>
#include "Crypt.h" // include the class

int main()
{
    Crypt crypt; // create the obj
    crypt.DisplayMessage(); // display the message

    std::cout << "\n";
    std::cout << "===== CRYPT MENU =====\n";
    std::cout << "1. Enter the Crypt\n";
    std::cout << "2. Flee\n";

    std::cin.get(); // pause for a keypress before closing
    return 0;
}