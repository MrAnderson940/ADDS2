#include "Truckloads.h"
#include "Reverser.h"
#include <iostream>

int main(){
    Reverser r1;
    std::cout << r1.reverseString("dsadgfa") << std::endl;
    
    std::cout << r1.reverseDigit(2145120) << std::endl;
    std::cout << r1.reverseDigit(02144) << std::endl;
    std::cout << r1.reverseDigit(147483647) << std::endl;

}