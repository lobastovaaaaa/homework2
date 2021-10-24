#include "sphere.h"

void Sphere::In(ifstream &ifst) {
    ifst >> radius;
}

void Sphere::InRnd() {
    radius = Shape::rnd20.Get();
}

void Sphere::Out(ofstream &ofst) {
    ofst << "It is Sphere: radius = " << radius << ". SurfaceArea = " << SurfaceArea() << "\n";
}

double Sphere::SurfaceArea() {
    return 4 * 3.14159 * radius * radius / 3;
}
