#ifndef __TRIE_H__
#define __TRIE_H__

#include <unordered_map>
#include <string>

class TrieNode {
private:
    bool isEndOfWord;
    std::unordered_map<char, TrieNode*> children;

public:
    TrieNode();
    bool getIsEndWord() const;
    void setIsEndWord(bool isEndWord);
    TrieNode* getChild(char c);
    TrieNode* insertChild(char c);
    std::unordered_map<char, TrieNode*> getChildren();
};

#endif