#include "Truckloads.h"
#include <iostream>

int Truckloads::numTrucks(int numCrates, int loadSize){
    //std::cout << "pos1 " << numCrates << std::endl;
    if (numCrates <= loadSize){
        return 1;
    }
    if (numCrates % 2 != 0 ){
        return numTrucks(numCrates/2, loadSize) + numTrucks(numCrates/2 + 1, loadSize);
    } else{
        return 2 * numTrucks(numCrates/2,loadSize);
    }
}