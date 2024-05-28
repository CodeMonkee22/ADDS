#ifndef __PATRON_H__
#define __PATRON_H__

class Patron{
    private:
        int patronID;
    
    public:
        Patron();
        Patron(int patronID);
        int getPatronID();
        void setPatronID(int patronID);
        ~Patron();
};

#endif