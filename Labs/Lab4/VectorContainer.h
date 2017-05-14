#ifndef VECTORCONTAINER_H
#define VECTORCONTAINER_H

#include "Container.h"
#include <vector>
#include "Sort.h"

class VectorContainer : public Container {
    protected:
        std::vector<Base*> v;
        
    public:
        VectorContainer();
        virtual void add_element(Base* element);
        virtual void print();
        virtual void sort();
        virtual void swap(int i, int j);
        virtual Base* at(int i);
        virtual int size();
    
};


#endif 