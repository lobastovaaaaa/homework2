#ifndef __sphere__
#define __sphere__
#include <fstream>
using namespace std;

# include "rnd.h"
#include "shape.h"

class Sphere: public Shape {
public:
    virtual Sphere() {}
    virtual void In(ifstream &ifst);
    virtual void InRnd();
    virtual void Out(ofstream &ofst);
    virtual double SurfaceArea();
private:
    int radius;
};

#endif
