#ifndef __DOCUMENTMANAGER_H__
#define __DOCUMENTMANAGER_H__
#include <map>
#include <vector>
#include <string>
#include "Patron.h"
#include "Document.h"
#include <algorithm>

class DocumentManager {
    private:
        std::map<std::string, Document*> documents;
        std::vector<Patron*> patrons;


    public:
        DocumentManager();
        void addDocument(std::string name, int id, int license_limit);
        void addPatron(int patronID);
        int search(std::string name); 
        bool borrowDocument(int docID, int patronID);
        void returnDocument(int docID, int patronID);
        ~DocumentManager();
};

#endif