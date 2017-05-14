#include "ListContainer.h"

ListContainer::ListContainer() {}

void ListContainer::add_element(Base* element) {
    myList.push_back(element);
}

void ListContainer::print() {
    for (auto iterator = myList.begin(); iterator != myList.end(); ++iterator) {
        std::cout << (*iterator)->evaluate() << std:: endl; 
    }
}

void ListContainer::sort() {
    sort_function->sort(this);
}

void ListContainer::swap(int i, int j) {
    std::list<Base*>::iterator it_i = myList.begin();
    std::list<Base*>::iterator it_j = myList.begin();
    
    std::advance(it_i, i);
    std::advance(it_j, j);
    
    Base* temp_i = *it_i;
    Base* temp_j = *it_j;
    
    *it_i = temp_j;
    *it_j = temp_i;
}

Base* ListContainer::at(int i) {
    auto it = myList.begin();
    advance(it, i);
    
    return *it;
}

int ListContainer::size() {
    return myList.size();
}

