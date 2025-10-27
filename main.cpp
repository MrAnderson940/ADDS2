#include <unordered_map>
#include <iostream>
#include <vector>
struct st{
    std::string a;
    int b;
};

int main(){
    // std::unordered_map<int, st> map;
    // map[99] = {"hello", 1};

    // std::cout << map.at(99).a << " " << map.at(99).b << "\n";


    
    std::unordered_map<int, std::vector<std::string, int>> map;
    map[99];
    
}