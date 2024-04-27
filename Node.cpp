#include "Node.h"

Node::Node() {
    link = nullptr;
}

Node::Node(int data, Node* link) {
    this->setData(data);
    this->setLink(link);
}

int Node::getData() {return data;}

Node* Node::getLink() {return link;}

void Node::setData(int data) {
    this->data = data;
}

void Node::setLink(Node* link) {
    this->link = link;
}