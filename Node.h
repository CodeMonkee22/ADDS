#ifndef __NODE_H__
#define __NODE_H__

class Node{

 private:
    int data;
    Node* link;
 public:
    Node();
    Node(int data, Node* link);
    int getData();
    Node* getLink();
    void setData(int data);
    void setLink(Node* link);

};

#endif