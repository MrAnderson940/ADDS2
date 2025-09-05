#include "BubbleSort.h"
#include "QuickSort.h"
#include "RecursiveBinarySearch.h"
#include <iostream>
#include <sstream>

using namespace std;

int main(){
    vector<int> list1 = {1,3,5,4,-5,100,7777,2014,0};
    vector<int> listout1,listout2;
    BubbleSort sorterB;
    QuickSort sorterQ;
    RecursiveBinarySearch r;

    std::string line;
    int number;
    std::vector<int> numbers;

    std::getline(std::cin, line);
    std::istringstream stream(line);
    while (stream >> number){
        numbers.push_back(number);
    }


    listout1 = sorterQ.sort(numbers);
   // cout << "t1\n" << r.search(listout1,1) << endl;
    if (r.search(listout1,1) == 0){
        cout << "false ";
    } else {
        cout << "true ";
    }
    for (int i=0; i<listout1.size();i++){
        cout << listout1[i] << " ";
    }
    cout << endl;
}
