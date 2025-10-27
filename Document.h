#ifndef DOCUMENT_H
#define DOCUMENT_H
#include <string>

class Document {
    private:
    int limit, out;
    std::string name;
    public:
    Document(int l, std::string n);
    std::string getName();
    bool borrow();
    void back();

};

#endif