#include "tetrah.h"

void Tetrah::In(ifstream &ifst) {
    ifst >> edge;
}

void Tetrah::InRnd() {
    edge = Shape::rnd20.Get();
}

void Tetrah::Out(ofstream &ofst) {
    ofst << "It is Tetrahedron: edge = "
         << edge << ". SurfaceArea = " << SurfaceArea() << "\n";
}

double Tetrah::SurfaceArea() {
    return 1.732 * edge;
}
