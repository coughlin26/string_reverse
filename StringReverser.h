#ifndef STRING_REVERSER_H
#define STRING_REVERSER_H
#include <string>

class StringReverser
{
public:
    StringReverser();
    ~StringReverser();
    const std::string reverseLetters(const std::string inputString);
    const std::string reverseWords(const std::string inputString);
};

#endif