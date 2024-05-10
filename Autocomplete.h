#pragma once 
#include "Trie.h"
#include <vector>
#include <string>

class Autocomplete {
private:
    TrieNode* root;
    void getSuggestionsHelper(TrieNode* node, std::string prefix, std::vector<std::string>& suggestions) {
        if (node == nullptr)
            return;

        if (node->getIsEndWord()) {
            suggestions.push_back(prefix);
        }

        for (auto& child : node->getChildren()) {
            getSuggestionsHelper(child.second, prefix + child.first, suggestions);
        }
    }

public:
    Autocomplete();
    void insert(std::string word);
    std::vector<std::string> getSuggestions(std::string partialWord);
};