#include "PrefixMatcher.h"

PrefixMatcher::PrefixMatcher() {
    root = new routerTrie();
}

void PrefixMatcher::insert(std::string address, int routerNumber) {
    routerTrie* current = root;

    for(char c : address) {
        routerTrie* child = current->getChild(c);
        if(!child) {
            child = current->insertChild(c, -1); // -1 since router number will be set separately
        }
        current = child;
    }
    current->setRouterNumber(routerNumber); // Set router number after insertion
}

int PrefixMatcher::selectRouter(std::string networkAddress) {
    std::string traversePrefix;
    int longestPrefixRouter = -1;
    routerTrie* currentNode = root;

    for (char c : networkAddress) {
        traversePrefix += c;

        if (currentNode->getChildren().find(std::string(1, c)) != currentNode->getChildren().end()) {
            currentNode = currentNode->getChildren()[std::string(1, c)];

            if (currentNode->getRouterNumber() != -1) {
                longestPrefixRouter = currentNode->getRouterNumber();
            }
        } else {
            break;
        }
    }
    return longestPrefixRouter;
}
