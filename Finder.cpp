#include "Finder.h"

    using namespace std;

    vector<int> Finder::findSubstrings(string s1, string s2) {

        vector<int> result;

        size_t lastFound = 0;

        for(size_t i = 1; i <= s2.size(); i++) {
            size_t found = s1.find(s2.substr(0, i), lastFound);
            if (found != string::npos) {
                lastFound = found;
                result.push_back(found);
            } else {
                while(i <= s2.size()) {  
                    result.push_back(-1);
                    i++;
                }
            }
        }
        return result;
    }