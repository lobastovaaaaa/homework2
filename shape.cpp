#include "sphere.h"
#include "tetrah.h"
#include "parall.h"

Random Shape::rnd20(1, 20);
Random Shape::rnd3(1,3);

Shape* Shape::StaticIn(ifstream &ifst) {
    int k;
    ifst >> k;
    Shape* sp = nullptr;
    switch(k) {
        case 1:
            sp = new Sphere;
            break;
        case 2:
            sp = new Tetrah;
            break;
        case 3:
            sp = new Parall;
            break;
    }
    sp->In(ifst);
    return sp;
}

Shape *Shape::StaticInRnd() {
    auto k = Shape::rnd3.Get();
    Shape* sp = nullptr;
    switch(k) {
        case 1:
            sp = new Sphere;
            break;
        case 2:
            sp = new Tetrah;
            break;
        case 3:
            sp = new Parall;
            break;
    }
    sp->InRnd();
    return sp;
}
