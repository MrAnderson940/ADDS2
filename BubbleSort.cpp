#include "BubbleSort.h"

std::vector<int> BubbleSort::sort(std::vector<int> list){
    bool change = true;
    int temp;
    while (change){
        change = false;
        for (int i=0;i<(list.size()-1);i++){
            if (list[i] > list[i+1]){
                change = true;
                temp = list[i];
                list[i] = list[i+1];
                list[i+1] = temp;
            }
        }
    }
    return list;
}