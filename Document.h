#ifndef __DOCUMENT_H__
#define __DOCUMENT_H__
#include <string>

class Document{
    private:
        std::string name;
        int id;
        int license_limit;

    public:
        Document();
        Document(int id, int license_limit);
        std::string getName();
        void setName(std::string name);
        int getID();
        void setID(int id);
        int getLicense_Limit();
        void setLicense_Limit(int license_limit);
}; 

#endif