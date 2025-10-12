#ifndef AUTOCOMPLETE_H
#define AUTOCOMPLETE_H
#include "Trie.h"
#include <string>

class Autocomplete{
    private:
    Trie* root;
    public:
    Autocomplete();
    std::vector<std::string> getSuggestions(std::string partialWord);
    void insert(std::string word);
};

#endif