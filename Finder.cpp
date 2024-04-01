#include "Finder.h" 
#include <iostream>


std::vector<int> concatenateVectors(std::vector<int>& v1, const std::vector<int>& v2) {
    std::vector<int> result = v1;
    result.insert(result.begin(), v2.begin(), v2.end());
    return result;
}

std::vector<int> Finder::findSubstrings(std::string s1, std::string s2) {
    std::vector<int> result;


    if (s2.empty()) {
        return result;
    }

    

    size_t found = s1.find(s2);
    if (found != std::string::npos) {
        result.push_back(found);
    } else {
        result.push_back(-1);
    }

    result = concatenateVectors(result, findSubstrings(s1, s2.substr(0, s2.size() - 1)));

    for(size_t i = 0; i < result.size(); i++) {
        std::cout << result[i] << ", ";
    }
    std::cout << "" << std::endl;

    return result;
}

