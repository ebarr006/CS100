#ifndef FLOOR_H
#define FLOOR_H

#include "Oper1.h"

class Floor : public Oper1 {
    public:
        Floor(Base *a);
        virtual double evaluate();
};

#endif