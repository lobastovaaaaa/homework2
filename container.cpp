#include "container.h"

Container::Container(): len{0} { }

Container::~Container() {
    Clear();
}

void Container::Clear() {
    for(int i = 0; i < len; i++) {
        delete storage[i];
    }
    len = 0;
}

void Container::In(ifstream &ifst) {
    while(!ifst.eof()) {
        if((storage[len] = Shape::StaticIn(ifst)) != 0) {
            len++;
        }
    }
}

void Container::InRnd(int size) {
    while(len < size) {
        if((storage[len] = Shape::StaticInRnd()) != nullptr) {
            len++;
        }
    }
}

void Container::Out(ofstream &ofst) {
    ofst << "Container contains " << len << " elements.\n";
    for(int i = 0; i < len; i++) {
        ofst << i << ": ";
        storage[i]->Out(ofst);
    }
}

double Container::SurfaceArea() {
    double sum = 0.0;
    for(int i = 0; i < len; i++) {
        sum += storage[i]->SurfaceArea();
    }
    return sum;
}
