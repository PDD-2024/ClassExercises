#include "geometry.h"

Rectangle::Rectangle(float width, float height) : width(width), height(height) {}

float Rectangle::get_area()
{
    return width * height;
}

