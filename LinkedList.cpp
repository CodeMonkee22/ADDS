#include <iostream>
#include "LinkedList.h"

LinkedList::LinkedList() {
	head = nullptr;
}

LinkedList::~LinkedList() {
	while (head != nullptr) {
		deleteFront();
	}
}

void LinkedList::insertFront(int item) {
	Node* newNode = new Node(item, head);
	head = newNode;
}

void LinkedList::deleteFront() {
	if(head != nullptr) {
		Node* oldHead = head;
		head = head->link;
		delete oldHead;
	}
}

void LinkedList::printList() {
	Node* currNode = head;
	while(currNode != nullptr) {
		std::cout << currNode->data << " ";
		currNode = currNode->link;
	}
}

/////////// your code goes here... DO NOT change the function signatures ///////////

bool LinkedList::swap(int pos1, int pos2) {
 
	return true;

}

bool LinkedList::find_and_delete(int target) {
	if(target == head->data) {
		deleteFront();
		return true;
	}

	Node* currNode = head;
	while(currNode != nullptr) {
		int position = 0;
		if(currNode->data == target) {
			Node* previousNode = traverse(position-1);
			previousNode->link = currNode->link;
			delete currNode;
			return true;
		}
		currNode = currNode->link;
		position++;
	}

	return false;
}

Node* LinkedList::traverse(int position) {
	if(position == 0) {
		return head;
	}
	int index = 0;
	Node* currNode = head;
	while(currNode != nullptr && position > index) {
		currNode = currNode->link;
	}
	return currNode;
}


