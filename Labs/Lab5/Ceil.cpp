#include "Ceil.h"

Ceil::Ceil(Base *a) : Oper1(a) {}
double Ceil::evaluate() {
    return ceil(o1->evaluate());
}