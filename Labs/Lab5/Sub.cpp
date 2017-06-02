#include "Sub.h"

Sub::Sub(Base *a, Base *b) : Oper2(a,b) {}
double Sub::evaluate() {
    return o1->evaluate() - o2->evaluate();
}