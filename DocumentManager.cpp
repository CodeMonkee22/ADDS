#include "DocumentManager.h"
#include "Document.h"
#include <iostream>

DocumentManager::DocumentManager() {
    
}

void DocumentManager::addDocument(std::string name, int id, int licence_limit) {
   
    Document* newDocument = new Document(id, licence_limit);
    documents[name] = newDocument;
    std::cout << "Document ID has been added " << std::endl;

}

void DocumentManager::addPatron(int patronID) {
    
    Patron* patron = new Patron(patronID);
    patrons.push_back(patron); 
}

int DocumentManager::search(std::string name) {

auto it = documents.find(name); 
if (it != documents.end()) {
   return it->second->getID();
} else {
    return 0;
}
}

bool DocumentManager::borrowDocument(int docID, int patronID) {}

void DocumentManager::returnDocument(int docID, int patronID) {}

DocumentManager::~DocumentManager(){
    
    for (auto& pair : documents) {
        delete pair.second; 
    }

    for (auto& patron : patrons) {
        delete patron;
    }
    
}