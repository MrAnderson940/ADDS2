#ifndef TRIEPF_H
#define TRIEPF_H
#include <vector>

class TriePF{
    private:
    int routerNum;
    std::vector<TriePF*> IP;
    public:
    TriePF();
    void setRouterNum(int num);
    int getRouterNum();
    std::vector<TriePF*>& getIP();
};

#endif