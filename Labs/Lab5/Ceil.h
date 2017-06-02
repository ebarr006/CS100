#ifndef CEIL_H
#define CEIL_H

#include "Oper1.h"

class Ceil : public Oper1 {
    public:
        Ceil(Base *a);
        virtual double evaluate();
};

#endif