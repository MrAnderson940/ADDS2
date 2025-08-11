#ifndef REVERSER_H
#define REVERSER_H
#include <string>

class Reverser{
    public:
    int reverseDigit(int value);
    int reverseDigit(int value, int reversed);
    std::string reverseString(std::string characters);
    std::string reverseString(std::string characters, std::string reversed, int n);
};

#endif