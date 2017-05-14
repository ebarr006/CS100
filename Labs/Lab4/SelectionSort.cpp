#include "SelectionSort.h"

void SelectionSort::sort(Container* container)
{
    
    for(int i = 0; i < container->size() - 1; ++i)
    {
        int minIndex = i;
        for(int j = i + 1; j < container->size(); ++j)
        {
            if (container->at(j)->evaluate() < container->at(minIndex)->evaluate()) {
                minIndex = j;
            }
        }
        container->swap(i, minIndex);
    }
}