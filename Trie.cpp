#include "Trie.h"


Trie::Trie(){
    fullWord = false;
    letter.resize(26, nullptr);

}

void Trie::setFullWord(bool w){
    fullWord = w;
}

bool Trie::getFullWord(){
    return fullWord;
}

std::vector<Trie*>& Trie::getLetter(){
    return letter;
}