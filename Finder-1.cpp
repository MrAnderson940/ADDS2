#include "Finder-1-1.h"


    std::vector<int> Finder::findSubstrings(std::string s1, std::string s2) {

        std::vector<int> result;
        int i = 1;
        bool notFound = false;\
        size_t found = 0;
        //std::cout << ((i <= s2.size()) && (notFound == 0)) << notFound << std::endl;
        while((i <= s2.size()) && (notFound == 0)) {
            found = s1.find(s2.substr(0, i),found);
            if (found != std::string::npos) {
                result.push_back(found);
            } else {
                result.push_back(-1);
                //std::cout << "done\n";
                notFound = true;
            }
            i++;
            //std::cout << i << " " << s2.size() << " " << ((i <= s2.size()) && ~notFound) << ~notFound << std::endl;
        }
        while (i <= s2.size()){
            result.push_back(-1);
            i++;

        }
        
        return result;
    }

   