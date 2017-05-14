/*------------------------------------------------------
 Authors:   
            Kevin Huang - khuan028@ucr.edu
            Emilio Barreiro - ebarr006@ucr.edu
      TA:   Christina Pavlopoulou
 Section:   022
------------------------------------------------------*/

#include <iostream>
#include "Add.h"
#include "Sub.h"
#include "Mult.h"
#include "Div.h"
#include "Sqr.h"
#include "Op.h"
#include "SelectionSort.h"
#include "BubbleSort.h"
#include "VectorContainer.h"
#include "ListContainer.h"

int main()
{
    Op* op7 = new Op(7);
    Op* op4 = new Op(4);
    Op* op3 = new Op(3);
    Op* op2 = new Op(2);
    Mult* A = new Mult(op7, op4);   //28
    Add* B = new Add(op3, A);       //31
    Sub* C = new Sub(B, op2);       //29
    Sqr* D = new Sqr(C);            //841
    
/* -------------------------- Selection Sort -------------------------------*/

    std::cout << "--------- SELECTION SORT ---------" << std::endl;

    VectorContainer* myVector = new VectorContainer();
    myVector->add_element(A);
    myVector->add_element(B);
    myVector->add_element(C);
    myVector->add_element(D);

    std::cout << "Container Before Sort: " << std::endl;
    myVector->print();

    std::cout << "Container After Sort: " << std::endl;
    myVector->set_sort_function(new SelectionSort());
    myVector->sort();
    myVector->print();
    
/* -------------------------- Bubble Sort -------------------------------*/

    std::cout << "--------- BUBBLE SORT ---------" << std::endl;

    ListContainer* myList = new ListContainer();
    myList->add_element(A);
    myList->add_element(B);
    myList->add_element(C);
    myList->add_element(D);
    
    std::cout << "Container Before Sort: " << std::endl;
    myList->print();

    std::cout << "Container After Sort: " << std::endl;
    myList->set_sort_function(new BubbleSort());
    myList->sort();
    myList->print();
    
    return 0;
}