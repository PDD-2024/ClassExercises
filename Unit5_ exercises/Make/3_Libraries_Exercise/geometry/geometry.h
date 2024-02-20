#ifndef GEOMETRY_H
#define GEOMETRY_H

class Circle
{
private:
    float radius;
public:
    Circle(float radius);
    float get_area();
};

class Rectangle
{
private:
    float width;
    float height;
public:
    Rectangle(float width, float height);
    float get_area();
};


#endif // GEOMETRY_H
