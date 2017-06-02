#ifndef ABS_H
#define ABS_H

#include "Oper1.h"

class Abs : public Oper1 {
    public:
        Abs(Base *a);
        virtual double evaluate();
};

#endif