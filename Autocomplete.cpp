#include "Autocomplete.h"
#include <queue>


Autocomplete::Autocomplete(){
    root = new Trie;
}

std::vector<std::string> Autocomplete::getSuggestions(std::string partialWord){
    Trie* hold = root;
    std::vector<std::string> sugguestions;

    for (char l : partialWord){
        int let = l - 'a';
        if (hold->getLetter()[let] == nullptr){
            return sugguestions;
        }
        hold = hold->getLetter()[let];
    }

    std::queue<std::pair<Trie*, std::string>> next;
    next.push({hold, partialWord});

    while (!next.empty()){
        std::pair<Trie*, std::string> pair = next.front();
        next.pop();
        hold = pair.first;
        std::string word = pair.second;
        if (hold->getFullWord() == true){
            sugguestions.push_back(word);
        }

        for (int i = 0; i < 26; i++){
            if (hold->getLetter()[i] != nullptr){
                next.push({hold->getLetter()[i], word + (char)(i + 'a')});
            }
        }

    }

    return sugguestions;
    
}

void Autocomplete::insert(std::string word){
    Trie* hold = root;
    for (int i = 0; i < word.length(); i++){
        int let = word[i] - 'a';
        if (hold->getLetter()[let] != nullptr){
            hold = hold->getLetter()[let];
            continue;
        }
        Trie* newLet = new Trie();
        hold->getLetter()[let] = newLet;
        hold = hold->getLetter()[let];
    }

    hold->setFullWord(true);
}