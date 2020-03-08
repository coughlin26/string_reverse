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
    std::string outputString = "";
    std::string reversedChars = reverseLetters(inputString);

    // Then reverse the words in place.
    int startIndex = 0;
    int endIndex = 0;
    while (endIndex < reversedChars.length())
    {
        endIndex = reversedChars.find(' ', startIndex);
        if (endIndex != std::string::npos)
        {
            if (startIndex != 0)
            {
                outputString.append(" ");
            }

            outputString.append(reverseLetters(reversedChars.substr(startIndex, endIndex)));
            startIndex = endIndex + 1;
        }
        else
        {
            break;
        }
    }

    return outputString;
}