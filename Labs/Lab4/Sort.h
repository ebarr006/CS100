/* TA SPECIFIC INSTRUCTIONS:
void sort(Container *c) {}
*/

#ifndef SORT_H
#define SORT_H

#include "Container.h"

class Sort {
	public:
           /* Constructors */
		Sort() {};
 
           /* Pure Virtual Functions */
		virtual void sort(Container* container) = 0;
};

#endif