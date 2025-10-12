#ifndef TRIEPF_H
#define TRIEPF_H
#include <vector>

class TriePF{
    private:
    int routorNum;
    std::vector<TriePF*> IP;
    public:
    TriePF();
    void setRoutorNum(int num);
    int getRoutorNum();
    std::vector<TriePF*>& getIP();
};

#endif