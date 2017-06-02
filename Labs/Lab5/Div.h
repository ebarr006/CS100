#ifndef DIV_H
#define DIV_H

#include "Oper2.h"

class Div : public Oper2 {
    public:
        Div(Base *a, Base *b);
        virtual double evaluate();
};

#endif 