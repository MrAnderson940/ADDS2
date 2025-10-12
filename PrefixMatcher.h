#ifndef PREFIXMATCHER_H
#define PREFIXMATCHER_H
#include "TriePF.h"
#include <string>

class PrefixMatcher{
    private:
    TriePF* root;
    public:
    PrefixMatcher();
    int selectRoutor(std::string networkAddress);
    void insert(std::string address, int routorNum);
};

#endif