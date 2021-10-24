#ifndef __tetrah__
#define __tetrah__

#include <fstream>
using namespace std;

#include "rnd.h"
#include "shape.h"

class Tetrah: public Shape {
public:
    virtual ~Tetrah() {}
    virtual void In(ifstream &ifst);
    virtual void InRnd();
    virtual void Out(ofstream &ofst);
    virtual double SurfaceArea();
private:
    int edge;
};

#endif
