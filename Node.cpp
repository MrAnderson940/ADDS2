#include "Node.h"


Node::Node(int d, Node* l){
    data = d;
    link = l;
}

int Node::getData(){
    return data;
}

Node* Node::getLink(){
    return link;
}

void Node::setData(int d){
    data = d;
}

void Node::setLink(Node* l){
    link = l;
}