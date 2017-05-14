#include "Sqr.h"

Sqr::Sqr(Base *a) : Oper1(a) {}
double Sqr::evaluate() {
    return o1->evaluate() * o1->evaluate();
}