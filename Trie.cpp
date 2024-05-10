#include "Trie.h"

TrieNode::TrieNode() {
    isEndOfWord = false;
}

bool TrieNode::getIsEndWord() const {
    return isEndOfWord;
}

void TrieNode::setIsEndWord(bool isEndOfWord) {
    this->isEndOfWord = isEndOfWord;
}

TrieNode* TrieNode::getChild(char c) {
    auto it = children.find(c);
    return (it != children.end()) ? it->second : nullptr;
}

TrieNode* TrieNode::insertChild(char c) {
    TrieNode* newNode = new TrieNode();
    children[c] = newNode;
    return newNode;
}

std::unordered_map<char, TrieNode*> TrieNode::getChildren() {return children;}