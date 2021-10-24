#ifndef __shape__
#define __shape__
#include <fstream>
using namespace std;

#include "rnd.h"

class Shape {
protected:
    static Random rnd20;
    static Random rnd3;
public:
    virtual ~Shape() {};
    static Shape *StaticIn(ifstream &ifdt);
    virtual void In(ifstream &ifdt) = 0;
    static Shape *StaticInRnd();
    virtual void InRnd() = 0;
    virtual void Out(ofstream &ofst) = 0;
    virtual double SurfaceArea() = 0;
};


#endif
