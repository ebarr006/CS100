#include "Add.h"

Add::Add(Base *a, Base *b) : Oper2(a,b) {}
double Add::evaluate() {
    return o1->evaluate() + o2->evaluate();
}
