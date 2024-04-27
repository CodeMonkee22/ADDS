#ifndef __LINKEDLIST_H__
#define __LINKEDLIST_H__
#include "Node.h"

class LinkedList{
    
    private:
        Node* head;

    public:
        Node* traverseToPosition(unsigned long int destinationPosition, int& traversedPosition);
        Node* traversedToPreviousNodeForValue(int key, int& traversedPosition);

        LinkedList();
        LinkedList(int* array, int len);
        ~LinkedList();
        void insertPosition(int pos, int newNum);
        bool deletePosition(int pos);
        int get(int pos);
        int search(int target);
        void printList();


};

#endif 