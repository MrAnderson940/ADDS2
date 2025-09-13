#include "LinkedList.h"
#include <limits>
#include <iostream>

LinkedList::LinkedList(){
    head = nullptr;
}

LinkedList::LinkedList(int* array, int len){
    head = new Node(array[0], nullptr);
    Node* hold = head;

    for (int i = 1; i < len; i++){
        Node* nNode = new Node(array[i],nullptr);
        hold->setLink(nNode);
        hold = nNode;
    }
}

LinkedList::~LinkedList(){
    Node* hold;
    while (head != nullptr){
        hold = head;
        head = head->getLink();
        delete hold;
    }
}

void LinkedList::insertPosition(int pos, int newNum){
    
    if (pos < 1){
        head = new Node(newNum,head);
        return;
    }
    Node* hold1 = head;
    Node* hold2 = head;
    hold1 = hold1->getLink();
    int count = 2;

    while ((count < pos) && (hold1->getLink() != nullptr)){
        hold2 = hold1;
        hold1 = hold1->getLink();
        count++;
    }

    if ((hold1->getLink() == nullptr) && (count == pos-1)){
        Node* nNode = new Node(newNum,nullptr);
        hold2->setLink(nNode);
    } else if(pos > count){
        Node* nNode = new Node(newNum,nullptr);
        hold2->setLink(nNode);
    } else {
        Node* nNode = new Node(newNum, hold1);
        hold2->setLink(nNode);
    }
}

bool LinkedList::deletePosition(int pos){
    int n = 1;
    if (n == pos){
        Node* hold = head;
        head = head->getLink();
        delete hold;
        return true;
    }

    Node* hold1 = head;
    Node* hold2 = head;
    hold1 = hold1->getLink();
    n++;

    while ((n != pos) && (hold1->getLink() != nullptr)){
        hold2 = hold1;
        hold1 = hold1->getLink();
        n++;
    }

    if ((hold1->getLink() == nullptr) && (n == pos-1)){
        hold2->setLink(nullptr);
        delete hold1;
        return true;
    } else if (n == pos){
        hold2->setLink(hold1->getLink());
        delete hold1;
        return true;
    }

    return false;
}

int LinkedList::get(int pos){
    if (pos < 1){
        return std::numeric_limits<int>::max();
    }
    int n = 1;

    if (n == pos){
        return head->getData();
    }

    Node* hold = head->getLink();
    n++;

    while ((n != pos) && (hold->getLink() != nullptr)){
        hold = hold->getLink();
        n++;
    }

    if ((hold->getLink() == nullptr) && (n == pos-1)){
        return std::numeric_limits<int>::max();
    } else if (n == pos){
        return hold->getData();
    }

    return std::numeric_limits<int>::max();
}

int LinkedList::search(int target){
    Node* hold = head;
    for (int i = 1;(hold==nullptr);i++){
        if (hold->getData() == target){
            return i;
        }
        hold = hold->getLink();
    }
    return -1;
}

void LinkedList::printList(){
    if (head->getLink()==nullptr){
        std::cout << "[]\n";
        return;
    }
    std::cout << "[";
    Node* hold = head;
    for (int i = 0;(hold!=nullptr);i++){
        std::cout << hold->getData() << " ";
        hold = hold->getLink();
    }
    std::cout << "]" << std::endl;
}