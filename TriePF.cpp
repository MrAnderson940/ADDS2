#include "TriePF.h"

TriePF::TriePF(){
    routorNum = -1;
    IP.resize(2, nullptr);
}

void TriePF::setRoutorNum(int num){
    routorNum = num;
}

int TriePF::getRoutorNum(){
    return routorNum;
}

std::vector<TriePF*>& TriePF::getIP(){
    return IP;
}