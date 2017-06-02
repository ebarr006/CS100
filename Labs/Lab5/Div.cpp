#include "Div.h"

Div::Div(Base *a, Base *b) : Oper2(a,b) {}
double Div::evaluate() {
    return o1->evaluate() / o2->evaluate();
}