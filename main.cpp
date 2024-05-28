#include "DocumentManager.h"
#include "Document.h"
#include "Patron.h"
#include <iostream>

int main() {

    DocumentManager* Manager;

    Manager->addDocument("The Happiness Plan", 115, 10);
    Manager->addDocument("Flow", 619, 15);
    Manager->addDocument("Meditations", 2777236564, 20);
    Manager->addDocument("The Twits", 5035, 5);

    Manager->addPatron(4958);
    Manager->addPatron(5743);
    Manager->addPatron(9438);


    std::cout << Manager->search("Flow") << std::endl;

    return 0;
}