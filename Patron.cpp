#include "Patron.h"

    Patron::Patron() {}

    Patron::Patron(int patronID) : patronID(patronID) {}

    int Patron::getPatronID() {return patronID;}

    void Patron::setPatronID(int patronID) {
        this->patronID = patronID;
    }

    Patron::~Patron(){
    }

