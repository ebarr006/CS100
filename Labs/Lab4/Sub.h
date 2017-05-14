#ifndef SUB_H
#define SUB_H

#include "Oper2.h"

class Sub : public Oper2 {
    public:
        Sub(Base *a, Base *b);
        virtual double evaluate();
};

#endif 