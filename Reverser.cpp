#include "Reverser.h"


int Reverser::reverseDigit(int value){
    if (value >= 1000000000){ 
        return -1;
    }
    return reverseDigit(value/10, value %10);
}

int Reverser::reverseDigit(int value, int reverced){
    if (value == 0){
        return reverced;
    }
    if (reverced == 0){
        return reverseDigit(value/10, value %10);
    }
    return reverseDigit(value/10,((reverced*10)+(value%10)));
}

std::string Reverser::reverseString(std::string characters){
    int n = characters.length();
    std::string s;
    s = s + characters[n];
    return reverseString(characters,s,n-1);
}

std::string Reverser::reverseString(std::string characters, std::string reversed, int n){
    if (n == -1){
        return reversed;
    }
    return reverseString(characters, reversed + characters[n], n-1);
}