#ifndef TRIANGLE_H
#define TRIANGLE_H
#include "point.h"

using namespace std;

class Triangle{
    private:
        Point vertex1{0,0};
        Point vertex2{50,30};
        Point vertex3{25,10};
    public:
        Triangle();
        Triangle(Point, Point, Point);
        double perimeter();
        double area();
};

#endif