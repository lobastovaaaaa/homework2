#ifndef __parall__
#define __parall__
#include <fstream>
using namespace std;

# include "rnd.h"
#include "shape.h"

class Parall: public Shape {
public:
    virtual Parall() {}
    virtual void In(ifstream &ifst);
    virtual void InRnd();
    virtual void Out(ofstream &ofst);
    virtual double SurfaceArea();
private:
    int length, width, height;
};

#endif