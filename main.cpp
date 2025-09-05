#include "BubbleSort.h"
#include "QuickSort.h"
#include "RecursiveBinarySearch.h"
#include <iostream>

using namespace std;

int main(){
    vector<int> list1;
    vector<int> listout1,listout2;
    BubbleSort sorterB;
    QuickSort sorterQ;
    RecursiveBinarySearch r;
    for (int i = 0; i < 8; i++){
        int c;
        cout << "plase input number: ";
        cin >> c;
        list1.push_back(c);
    }
    listout1 = sorterQ.sort(list1);
    cout << r.search(listout1,1) << " ";
    for (int i=0; i<listout1.size();i++){
        cout << listout1[i] << " ";
    }
    cout << endl;
}
