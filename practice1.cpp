#include "practice1.h"

std::vector<std::string> PotionCraft::getPotions(){
    return potions;
}
void PotionCraft::brewPotion(std::string name){
    potions.push_back(name);
}
std::string PotionCraft::consumePotion(std::string name){
    std::vector<std::string> temp;
    bool comsumed = false;
    for (int i =0;i< potions.size(); i++){
        if ((potions.at(i) == name && ~comsumed)){
            comsumed = true;
        } else{
            temp.push_back(potions.at(i));
        }
    }
    potions = temp;
    return name;
}
void PotionCraft::brewMultiplePotions(std::vector<std::string> potionsToAdd){
    for (int i = 0; i < potionsToAdd.size(); i++){
        potions.push_back(potionsToAdd.at(i));
    }
}
std::vector<std::string> PotionCraft::fillExternalContainer(std::vector<std::string>& container){
    for (int i = 0; i < potions.size(); i++){
        container.push_back(potions.at(i));
    }
    return container;
}