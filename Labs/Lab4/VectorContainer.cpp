#include "VectorContainer.h"

VectorContainer::VectorContainer() {}

void VectorContainer::add_element(Base* element) {
    v.push_back(element);
}

void VectorContainer::print() {
    for(Base *b: v)
    {
        std::cout << b->evaluate() << std::endl;
    }
}

void VectorContainer::sort() {
    sort_function->sort(this);
}

void VectorContainer::swap(int i, int j) {
    Base* temp = v.at(i);
    v.at(i) = v.at(j);
    v.at(j) = temp;
}

Base* VectorContainer::at(int i) {
    return v.at(i);
}

int VectorContainer::size() {
    return v.size();
}

