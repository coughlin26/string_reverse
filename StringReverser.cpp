#include <iostream>
#include <string>
#include "StringReverser.h"

StringReverser::StringReverser()
{
}

StringReverser::~StringReverser()
{
}

/**
 * Reverses the charaters in a string.
 * 
 * @param inputString The string to reverse.
 */
const std::string StringReverser::reverseLetters(const std::string inputString)
{
    std::string outputString = "";

    for (int i = inputString.length(); i >= 0; i--)
    {
        outputString.append(inputString.substr(i, 1));
    }

    return outputString;
}

/**
 * Reverses the order of the words in a string.
 * 
 * @param inputString The string to reverse.
 */
const std::string StringReverser::reverseWords(const std::string inputString)
{
    // Reverse the whole string first.
    std::string outputString = reverseLetters(inputString);

    // Then reverse the words in place.
    int i = 0;
    int pos = 0;
    while ((i = outputString.find(" ", pos)) != std::string::npos)
    {
        outputString = reverseLetters(outputString.substr(pos, i));
        pos = i;
    }

    return outputString;
}