#include "parall.h"

void Parall::In(ifstream &ifst) {
    ifst >> length >> width >> height;
}

void Parall::InRnd() {
    edge = Shape::rnd20.Get();
}

void Parall::Out(ofstream &ofst) {
    ofst << "It is Parallelepiped: length = "
         << length << ", width = "
            << width << ", height = "
            << height << ". SurfaceArea = " << SurfaceArea() << "\n";
}

double Parall::SurfaceArea() {
    return length * width * height;
}

