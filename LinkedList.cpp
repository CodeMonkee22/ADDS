#include "LinkedList.h"
#include <iostream>
#include <limits>

LinkedList::LinkedList() {
    this->head = nullptr;
}

LinkedList::LinkedList(int* array, int len) {
    if(len == 0) {
        this->head = nullptr;
    } else {
        this->head = nullptr;
        for(int arrIndex = (len - 1); arrIndex >= 0; arrIndex--) {
            Node* newHead = new Node(array[arrIndex], head);
            head = newHead;
        }
    }
}

Node* LinkedList::traverseToPosition(unsigned long int destinationPosition, int& traversedPosition) {
    Node* curr = head;
    while(curr != nullptr && --destinationPosition) {
        curr = curr->getLink();
        ++traversedPosition;
    }
    return curr;
}

Node* LinkedList::traversedToPreviousNodeForValue(int key, int& traversedPosition) {
    if(head == nullptr) {
        return nullptr;
    } else if(head->getData() == key) {
        return nullptr;
    } else {
        Node* prev = head;
        while(prev->getLink() != nullptr) {
            if(prev->getLink()->getData() == key) {
                return prev;
            } else {
                prev = prev->getLink();
                ++traversedPosition;
            }
        }
    }
    return nullptr;
}

void LinkedList::insertPosition(int pos, int newNum) {
    if(pos <= 1) {
        Node* newHead = new Node(newNum, head);
        this->head = newHead;
        return;
    } else {
        int traversedPosition = 1;
        Node* prevNode = this->traverseToPosition(pos - 1, traversedPosition);
        if(prevNode != nullptr) {
            Node* nodeToBeInserted = new Node(newNum, prevNode->getLink());
            prevNode->setLink(nodeToBeInserted);
        }
    }
}

bool LinkedList::deletePosition(int pos) {
    if(pos <= 0 || head == nullptr) {
        return false;
    } else if(pos == 1) {
        Node* temp = head;
        head = head->getLink();
        delete temp;
        return true;
    } else {
        int traversedPosition = 1;
        Node* prevNodeToBeDeleted = this->traverseToPosition(pos - 1, traversedPosition);
        if(prevNodeToBeDeleted != nullptr && prevNodeToBeDeleted->getLink() != nullptr) {
            Node* curr = prevNodeToBeDeleted->getLink();
            prevNodeToBeDeleted->setLink(curr->getLink());
            delete curr;
            return true;
        }
    }
    return false;
}

int LinkedList::get(int pos) {
    int traversedPosition = 1;
    Node* curr = this->traverseToPosition(pos, traversedPosition);
    if(curr != nullptr) {
        return curr->getData();
    }
    return std::numeric_limits<int>::max();
}

int LinkedList::search(int target) {
    int traversedPosition = 1;
    Node* prev = traversedToPreviousNodeForValue(target, traversedPosition);
    if(prev == nullptr) {
        return traversedPosition;
    } else if(prev->getLink() != nullptr) {
        return traversedPosition + 1;
    }
    return -1;
}

void LinkedList::printList() {
    Node* currNode = head;
    std::cout << "[ ";
    while(currNode != nullptr) {
        std::cout << currNode->getData() << " ";
        currNode = currNode->getLink();
    }
    std::cout << "]" << std::endl;
}

LinkedList::~LinkedList() {
    while(this->head != nullptr) {
        Node* oldHead = head;
        this->head = this->head->getLink();
        delete oldHead;
    }
}
