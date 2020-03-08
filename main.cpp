#include <iostream>
#include "StringReverser.h"

int main(int argc, char const *argv[])
{
    StringReverser stringReverser = StringReverser();
    std::string inputString = "";
    std::cout << "Enter a string to reverse: ";
    std::cin >> inputString;

    std::cout << "Reveresed Characters: " << stringReverser.reverseLetters(inputString) << std::endl;

    if (inputString.find_first_of(" "))
    {
        std::cout << "Reversed Words: " << stringReverser.reverseWords(inputString) << std::endl;
    }

    return 0;
}
