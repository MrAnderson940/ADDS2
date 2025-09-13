#ifndef NODE_H
#define NODE_H

class Node{
    private:
    int data;
    Node* link;
    public:
    Node();
    Node(int d, Node* l);
    int getData();
    Node* getLink();
    void setData(int d);
    void setLink(Node* l);
};

#endif