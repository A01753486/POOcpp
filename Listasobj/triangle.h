#ifndef TRIANGLE_H
#define TRIANGLE_H
#include "point.h"

using namespace std;

class Triangle{
    private:
        Point vertex1{};
        Point vertex2{};
        Point vertex3{};
    public:
        Triangle();
        Triangle(Point, Point, Point);
        double perimeter();
        double area();
};

#endif