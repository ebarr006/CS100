#ifndef MULT_H
#define MULT_H

#include "Oper2.h"

class Mult : public Oper2 {
    public:
        Mult(Base *a, Base *b);
        virtual double evaluate();
};

#endif 