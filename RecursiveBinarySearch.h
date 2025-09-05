#ifndef RECURSIVEBINARYSEARCH_H
#define RECURSIVEBINARYSEARCH_H
#include <vector>

class RecursiveBinarySearch{
    public:
    bool search(std::vector<int> list, int n);
    bool search(std::vector<int> list, int n, int hi, int low);
};

#endif