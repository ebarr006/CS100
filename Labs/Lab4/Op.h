#ifndef OP_H
#define OP_H

#include "Base.h"

class Op : public Base {
    protected:
        double val;
        
    public:
        Op(double a);
        virtual double evaluate();
};

#endif 