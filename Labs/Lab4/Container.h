/* TA SPECIFIC INSTRUCTIONS:
Each class must have a separate header file(.h) and implementation file(.cpp).

You can use the list library and its advance(it, i) function.

void sort()
{
    calls the Sort class's sort() function
}
Since Container and Sort depend on each other, we must do things differently.
In "Container.h", rather than typing '#include "Sort.h"', we type 'class Sort'
In "Container.cpp", we type '#include "Sort.h"'

Use the command 'make clean; make' to link and compile the program.
*/
#ifndef CONTAINER_H
#define CONTAINER_H

#include "Base.h"
#include <iostream>

class Sort;

class Container {
    protected:
        Sort* sort_function;

    public:
	   /* Constructors */
        Container() : sort_function(NULL){};
        Container(Sort* function) : sort_function(function) {};
	
        /* Non Virtual Functions */
        void set_sort_function(Sort* sort_function); // set the type of sorting algorithm

        /* Pure Virtual Functions */
	    // push the top pointer of the tree into container
        virtual void add_element(Base* element) = 0; 
        // iterate through trees and output values
        virtual void print() = 0; 
        // calls on the previously set sorting-algorithm. Checks if                   
        //sort_function is not null, throw exception if otherwise
        virtual void sort() = 0; 

        /* Essentially the only functions needed to sort */
        //switch tree locations
        virtual void swap(int i, int j) = 0; 
        // get top ptr of tree at index i
        virtual Base* at(int i) = 0; 
        // return container size
        virtual int size() = 0; 
};

#endif