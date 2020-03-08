#include <iostream>
#include "StringReverser.h"

int main(int argc, char const *argv[])
{
    StringReverser stringReverser = StringReverser();
    char inputArray[128];
    std::cout << "Enter a string to reverse: ";
    std::cin.getline(inputArray, 128);
    std::string inputString = inputArray;

    std::cout << "Input String: " << inputString << std::endl;

    // Reverse the characters.
    std::cout << "Reveresed Characters: " << stringReverser.reverseLetters(inputString) << std::endl;

    // Only reverse the words if there are multiple words.
    if (inputString.find_first_of(' ') != std::string::npos)
    {
        std::cout << "Reversed Words: " << stringReverser.reverseWords(inputString) << std::endl;
    }

    return 0;
}
