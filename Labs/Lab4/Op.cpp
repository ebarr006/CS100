#include "Op.h"

Op::Op(double a) : val(a) {}

double Op::evaluate()
{
    return val;
}