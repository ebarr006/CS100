#ifndef OPER1_H
#define OPER1_H

#include "Base.h"

class Oper1 : public Base {
    protected:
        Base* o1;
        
    public:
        Oper1(Base *a);
        virtual double evaluate() = 0;   
};

#endif 