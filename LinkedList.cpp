#include "LinkedList.h"
#include <limits>
#include <iostream>

LinkedList::LinkedList(){
    head = nullptr;
}

LinkedList::LinkedList(int* array, int len){
    head = nullptr;
    for (int i = 0; i <= len; i++){
        if (sizeof(array) <= i){
            head = new Node(array[i],head);
        } else {
            head = new Node(0,head);
        }
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
    
    if (pos <= 1){
        head = new Node(newNum,head);
        return;
    }
    Node* hold = head;
    for (int i = 0; (i<pos)||(hold==nullptr);i++){
        hold = hold->getLink();
    }
    if (hold == nullptr){
        hold = head;
        for (int i = 0; ; i++){
            if(hold->getLink() == nullptr){
                Node* temp = new Node(newNum,nullptr);
                hold->setLink(temp);
                return;
            } else{
                hold = hold->getLink();
            }
        }
    } else {
        hold->setData(newNum);
    }

}

bool LinkedList::deletePosition(int pos){
    Node* hold1 = head;
    Node* hold2 = head->getLink();
    for (int i = 0; (i<pos)||(hold2==nullptr); i++){
        hold1 = hold2;
        hold2 = hold2->getLink();
    } 
    if (hold2 == nullptr){
        return false;
    } else{
        hold1->setLink(hold2->getLink());
        return true;
    }
}

int LinkedList::get(int pos){
    Node* hold = head;
    for (int i = 0; (i<pos)||(hold==nullptr);i++){
        hold = hold->getLink();
    }
    if (hold == nullptr){
        return std::numeric_limits<int>::max();
    } else{
        return hold->getData();
    }
}

int LinkedList::search(int target){
    Node* hold = head;
    for (int i = 0;(hold==nullptr);i++){
        if (hold->getData() == target){
            return i;
        }
        hold = hold->getLink();
    }
    return -1;
}

void LinkedList::printList(){
    if (head->getLink()==nullptr){
        return;
    }
    std::cout << "[";
        Node* hold = head;
    for (int i = 0;(hold==nullptr);i++){
        std::cout << hold->getData() << "] ";
        hold = hold->getLink();
    }
    std::cout << std::endl;
}