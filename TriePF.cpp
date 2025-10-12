#include "TriePF.h"

TriePF::TriePF(){
    routerNum = -1;
    IP.resize(2, nullptr);
}

void TriePF::setRouterNum(int num){
    routerNum = num;
}

int TriePF::getRouterNum(){
    return routerNum;
}

std::vector<TriePF*>& TriePF::getIP(){
    return IP;
}