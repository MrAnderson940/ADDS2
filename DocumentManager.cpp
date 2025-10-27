#include "DocumentManager.h"

void DocumentManager::addDocument(std::string name, int id, int license_limit){
    if (documents.find(id) != nullptr){
        return;
    }
    Document* doc = new Document(license_limit, name);
    documents[id] = doc;    
}


void DocumentManager::addPatron(int patronID){
    std::vector<int> empty;
    patrons[patronID] = empty;
}

int DocumentManager::search(std::string name){
    for (int i = 0; i < documents.size(); i++){
        if (documents[i] != nullptr){
            Document* doc = documents[i];
            if (doc->getName() == name){
                return i;
            }
        }
    }
    return 0;
}

bool DocumentManager::borrowDocument(int docID, int patronID){
    Document* doc = documents[docID];
    if (doc->borrow()){
        patrons[patronID].push_back(docID);
        return true;
    } else {
        return false;
    }
}

void DocumentManager::returnDocument(int docID, int patronID){
    Document* doc = documents[docID];
    doc->back();
    std::vector<int> vec = patrons[patronID];
    for (int i = 0; i < vec.size(); i++){
        if (vec.at(i) == docID){
            vec.erase(vec.begin() + i);
        }
    }
}