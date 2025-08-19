#include "practice1.h"


std::vector<int> modifiedFibonacci(int n){
    if (n == 1){
        return {2,3};
    }
    int a = 2, b = 3, c;
    for (int i = 2; i <= n; i++){
        c = a*b;
        a=b;
        b=c;
    }
    std::vector<int> fib;
    fib = modifiedFibonacci(n-1);
    fib.push_back(c);
    return fib;
}

int main(){
    PotionCraft a;
    a.brewPotion("Owen");
    a.brewPotion("Ogdsa");
    a.brewPotion("asdf");
    std::vector<std::string> list1, list2;
    list1 = a.getPotions();
    for (int i = 0; i < list1.size(); i++){
        std::cout << list1.at(i) << " ";
    }
    std::cout << std::endl;
    std::cout << a.consumePotion("Owen") << std::endl;
    list1 = a.getPotions();
    for (int i = 0; i < list1.size(); i++){
        std::cout << list1.at(i) << " ";
    }
    std::cout << std::endl;
    list2 = {"dkfs", "eg", "dgsg"};
    a.brewMultiplePotions(list2);
    list1 = a.getPotions();
    for (int i = 0; i < list1.size(); i++){
        std::cout << list1.at(i) << " ";
    }
    std::cout << std::endl;
    std::vector<int> fib = modifiedFibonacci(8);
    for (int i = 0; i < fib.size(); i++){
        std::cout << fib.at(i) << " ";
    }
    std::cout << std::endl;    
    return 0;
}