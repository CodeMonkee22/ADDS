#ifndef __PREFIXMATCHER_H__
#define __PREFIXMATCHER_H__

#include "routerTrie.h"

class PrefixMatcher{
private:
    routerTrie* root;
public:
    PrefixMatcher();
    int selectRouter(std::string networkAddress);
    void insert(std::string address, int routerNumber);
};

#endif
