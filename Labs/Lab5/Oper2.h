#ifndef OPER2_H
#define OPER2_H

#include "Base.h"

class Oper2 : public Base {
    protected:
        Base* o1;
        Base* o2;
        
    public:
        Oper2(Base *a, Base *b);
        virtual double evaluate() = 0;
};

#endif 