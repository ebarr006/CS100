#include "Floor.h"

Floor::Floor(Base *a) : Oper1(a) {}
double Floor::evaluate() {
    return floor(o1->evaluate());
}