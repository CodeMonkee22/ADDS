#include "Finder.h"
#include <iostream>
#include <string>
#include <chrono>

std::vector<int> Finder::findSubstrings(std::string s1, std::string s2) {
  std::vector<int> result;
  int index = 1;

  for (size_t i = 1; i <= s2.size(); i = index) { 
    size_t found = s1.find(s2.substr(0, index));

    while (found != std::string::npos) {
      result.push_back(found);
      index++;
      found = s1.find(s2.substr(0,index));
    }

    if (found == std::string::npos) {
      result.push_back(-1);
      index++;
    }
  }

  return result;
}
