/*------------------------------------------------------
 Authors:   
            Kevin Huang - khuan028@ucr.edu
            Emilio Barreiro - ebarr006@ucr.edu
      TA:   Christina Pavlopoulou
 Section:   022
------------------------------------------------------*/

#include <iostream>
#include <math.h>
#include "Add.h"
#include "Sub.h"
#include "Mult.h"
#include "Div.h"
#include "Sqr.h"
#include "Abs.h"
#include "Ceil.h"
#include "Floor.h"
#include "Op.h"



int main()
{
    Op* op1 = new Op(7);
    Op* op2 = new Op(-3);
    Op* op3 = new Op(-2.13);
    Op* op4 = new Op(3.14);
    
    Base* testMult = new Mult(op1, op2);
    Base* testSqr = new Sqr(op3);
    Base* testDiv = new Div(testMult, op4);
    
    Base* testAbs = new Abs(testMult);
    Base* testAbs2 = new Abs(op3);
    Base* testFloor = new Floor(op4);
    Base* testCeil = new Ceil(op4);
    
    Base* testAbsFloor = new Abs(testFloor);
    Base* testCeilAbs = new Ceil(testAbs2);
    
    std::cout << "Op1 = 7\nOp2 = 3\nOp3 = -2.13\nOp4 = 3.14\n-------------------\n";
    
    std::cout << "Mult(op1, op2) evaluated: " << testMult->evaluate() << ". Expected: -21\n";
    std::cout << "Div(testMult, op4) evaluated: " << testDiv->evaluate() << ". Expected: -6.68\n";
    std::cout << "Sqr(op3) evaluated: " << testSqr->evaluate() << ". Expected: 4.5369\n";
    
    std::cout << "testMult before Abs Operation: " << testMult->evaluate() << std::endl;
    std::cout << "Abs(testMult) evaluated: " << testAbs->evaluate() << ". Expected: 21\n";
    std::cout << "Abs(op3) evaluated: " << testAbs2->evaluate() << ". Expected: 2.13\n";
    
    std::cout << "Floor(op4) evaluated: " << testFloor->evaluate() << ". Expected: 3\n";
    std::cout << "Ceil(op4) evaluated: " << testCeil->evaluate() << ". Expected: 4\n";
    
    std::cout << "Abs(testFloor) evaluated: " << testAbsFloor->evaluate() << ". Expected: 3\n";
    std::cout << "Ceil(testAbs2) evaluated: " << testCeilAbs->evaluate() << ". Expected: 3\n";
    
    std::cout << " -------------- END TEST CASES ---------------\n";


    return 0;
}