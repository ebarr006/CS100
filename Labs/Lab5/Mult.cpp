#include "Mult.h"

Mult::Mult(Base *a, Base *b) : Oper2(a,b) {}
double Mult::evaluate() {
    return o1->evaluate() * o2->evaluate();
}