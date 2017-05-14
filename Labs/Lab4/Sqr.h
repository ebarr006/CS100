#ifndef SQR_H
#define SQR_H

#include "Oper1.h"

class Sqr : public Oper1 {
    public:
        Sqr(Base *a);
        virtual double evaluate();
};

#endif 