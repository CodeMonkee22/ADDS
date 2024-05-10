#ifndef __ROUTERTRIE_H__
#define __ROUTERTRIE_H__

#include <unordered_map>
#include <string>

class routerTrie {
private: 
    std::unordered_map<std::string, routerTrie*> children;
    int routerNumber;

public:
    routerTrie();
    routerTrie(int routerNumber);
    std::unordered_map<std::string, routerTrie*> getChildren();
    routerTrie* getChild(char c);
    routerTrie* insertChild(char c, int routerNumber);
    int getRouterNumber();
    void setRouterNumber(int routerNumber);
};

#endif
