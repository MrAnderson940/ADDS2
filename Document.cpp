#include "Document.h"

Document::Document(int l, std::string n){
    limit = l;
    out = 0;
    name = n;
}

std::string Document::getName(){
    return name;
}

bool Document::borrow(){
    if (limit > out){
        out++;
        return true;
    } else{
        return false;
    }
}

void Document::back(){
    out--;
}
