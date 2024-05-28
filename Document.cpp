#include "Document.h"

Document::Document() {}

Document::Document(int id, int license_limit) : id(id), license_limit(license_limit) {}

std::string Document::getName() {return name;}

void Document::setName(std::string name) {
    this->name = name;
} 

int Document::getID() {return id;}

void Document::setID(int id) {
    this->id = id;
}

int Document::getLicense_Limit() {return license_limit;} 

void Document::setLicense_Limit(int license_limit) {
    this->license_limit = license_limit;
}
