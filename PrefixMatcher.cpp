#include "PrefixMatcher.h"
#include <queue>

PrefixMatcher::PrefixMatcher(){
    root = new TriePF();
}

int PrefixMatcher::selectRouter(std::string networkAddress){
    TriePF* hold = root;
    int routor = -1;

    for (int i = 0; i < networkAddress.length(); i++){
        int check = networkAddress[i] - '0';
        if (hold->getIP()[check] == nullptr){
            return hold->getRouterNum();
        }
        hold = hold->getIP()[check];
    }

    std::queue<TriePF*> next;
    next.push(hold);

    while (!next.empty()){
        TriePF* hold2 = next.front();
        next.pop();
        if(hold2->getRouterNum() != -1){
            routor = hold2->getRouterNum();
        }
        if(hold2->getIP()[0] != nullptr){
            next.push(hold2->getIP()[0]);
        }
        if(hold2->getIP()[1] != nullptr){
            next.push(hold2->getIP()[1]);

        }
    }

    return routor;
}

void PrefixMatcher::insert(std::string address, int routorNum){
    TriePF* hold = root;

    for (int i = 0; i < address.length(); i++){
        int check = address[i] - '0';
        if (hold->getIP()[check] == nullptr){
            hold->getIP()[check] = new TriePF;
        }
        hold = hold->getIP()[check];
    }

    hold->setRouterNum(routorNum);
}