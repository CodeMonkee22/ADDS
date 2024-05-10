#include "Autocomplete.h"

Autocomplete::Autocomplete() {
    root = new TrieNode();
}

void Autocomplete::insert(std::string word) {
    TrieNode* current = root;
    for (char c : word) {
        TrieNode* child = current->getChild(c);
        if (!child) {
            child = current->insertChild(c);
        }
        current = child;
    }
    current->setIsEndWord(true);
}


std::vector<std::string> Autocomplete::getSuggestions(std::string partialWord) {
    std::vector<std::string> suggestions;
    TrieNode* current = root;
    for (char c : partialWord) {
        current = current->getChild(c);
        if (!current) {
            return suggestions;
        }
    }

    getSuggestionsHelper(current, partialWord, suggestions);
    return suggestions;
}