#include "RecursiveBinarySearch.h"
#include <iostream>


bool RecursiveBinarySearch::search(std::vector<int> list, int n){
    return search(list,n,list.size()-1,0);
}
bool RecursiveBinarySearch::search(std::vector<int> list, int n,int hi, int low){
    //std::cout << hi << " " << low << " t1\n";
    if (hi==low){
        if (list[hi] == n){
            return true;
        } else {
            return false;
        }
    }
    int check = low + (hi-low) % 2;
    //std::cout << check << " t2\n";
    if (list[check] == n ){
        //std::cout << "t3\n";
        return true;
    } else if (list[check] > n){
        //std::cout << "t4\n";
        return search(list,n,check-1,low);
    } else {
       // std::cout << "t5\n";
        return search(list,n,hi,check+1);
    }
}