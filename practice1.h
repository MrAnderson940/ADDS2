#ifndef POTIONCRAFT_H
#define POTIONCRAFT_H
#include <iostream>
#include <vector>
class PotionCraft{
    private:
    std::vector<std::string> potions;
    public:
    std::vector<std::string> getPotions();
    void brewPotion(std::string name);
    std::string consumePotion(std::string name);
    void brewMultiplePotions(std::vector<std::string> potionsToAdd);
    std::vector<std::string> fillExternalContainer(std::vector<std::string>& container);
};

#endif