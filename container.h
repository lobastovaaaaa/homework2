#ifndef __container__
#define __container__
#include "shape.h"

class Container {
public:
    Container();
    ~Container();
    void In(ifstream &ifst);
    void InRnd(int size);
    void Out(ofstream &ofst);
    double SurfaceArea();
private:
    void Clear();
    int len;
    Shape* storage[10000];
};

#endif
