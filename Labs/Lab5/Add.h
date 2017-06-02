#ifndef ADD_H
#define ADD_H

#include "Oper2.h"

class Add : public Oper2 {
    public:
        Add(Base *a, Base *b);
        virtual double evaluate();
};

#endif