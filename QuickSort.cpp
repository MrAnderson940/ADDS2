#include "QuickSort.h"
#include <iostream>

std::vector<int> QuickSort::sort(std::vector<int> list){
    return sort(list,(list.size()),0);
}


std::vector<int> QuickSort::sort(std::vector<int> list, int hi, int low){
    //std::cout << "t3\n";
    if ((hi-low) == 2){
        if (list[low] > list[hi]){
            int temp = list[low];
            list[low] = list[hi];
            list[hi] = list[low];
            
        }
        return list;
    } else if ((hi - low) < 2){
        return list;
    }

    int pivot = list[low+2];
    int j=low, k=hi-1;
    for (int i=low ; i<low+3;i++){
        //std::cout << "t2 " << list[i] << " " << pivot << std::endl;
        if (list[i] <= pivot){
            int temp = list[i];
            list[i] = list[j];
            list[j] = temp;
            j++;
            //std::cout << "t1\n";
        }
    }
    j--;
    for (int i = hi-1; i>j-1; i--){
        
       // std::cout << "t4 " << list[i] << " " << pivot << std::endl;
        if (list[i] >= pivot){
            int temp = list[i];
            list[i] = list[k];
            list[k] = temp;
            k--;
            //std::cout << "t1\n";
        }
    }
    k++;
    // for (int i=0;i<list.size();i++){
    //     std::cout << list[i] << " ";
    // }
    // std::cout << std::endl << hi << " " << low << " " << k << std::endl;
    list = sort(list,hi,k);
    list = sort(list,k-1,low);
    return list;
}