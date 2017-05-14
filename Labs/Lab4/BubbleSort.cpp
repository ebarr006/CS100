#include "BubbleSort.h"

void BubbleSort::sort(Container *container) 
{
    int sz = container->size();
    
    for(int i = 0; i < sz - 1; ++i) {
        for(int j = 0; j < sz - 1 - i; ++j) {
            if(container->at(j)->evaluate() > container->at(j+1)->evaluate()) {
                container->swap(j, j+1);
            }
        }
    }
}