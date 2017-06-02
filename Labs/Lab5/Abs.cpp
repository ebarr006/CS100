#include "Abs.h"

Abs::Abs(Base *a) : Oper1(a) {}
double Abs::evaluate() {
    return fabs(o1->evaluate());
}