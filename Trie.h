#ifndef TRIE_H
#define TRIE_H
#include <vector>

class Trie{
    private:
    bool fullWord;
    std::vector<Trie*> letter;
    public:
    Trie();
    void setFullWord(bool w);
    bool getFullWord();
    std::vector<Trie*>& getLetter();
};

#endif