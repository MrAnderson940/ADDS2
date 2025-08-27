#include "Finder-1-1.h"

using namespace std;


int main(){
    string s1, s2;
    vector<int> v1;
    s1 = "4634554567";
    s2 = "45689";
    Finder f;
    v1 = f.findSubstrings(s1,s2);
    for (int i=0; i < v1.size(); i++){
        cout << v1[i] << " ";
    }
    cout << endl;

}