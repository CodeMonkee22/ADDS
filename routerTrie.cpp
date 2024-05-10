#include "routerTrie.h"

routerTrie::routerTrie() {}

routerTrie::routerTrie(int routerNumber) {
    this->routerNumber = routerNumber;
}

std::unordered_map<std::string, routerTrie*> routerTrie::getChildren() { return children; }

int routerTrie::getRouterNumber() { return routerNumber; }

void routerTrie::setRouterNumber(int routerNumber) {
    this->routerNumber = routerNumber;
}

routerTrie* routerTrie::getChild(char c) {
    auto it = children.find(std::string(1, c));
    return (it != children.end()) ? it->second : nullptr;
}

routerTrie* routerTrie::insertChild(char c, int routerNumber) {
    routerTrie* newNode = new routerTrie(routerNumber);
    children[std::string(1, c)] = newNode;
    return newNode;
}
