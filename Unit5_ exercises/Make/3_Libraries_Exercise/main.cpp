#include "geometry/geometry.h"
/*// Direct inclusion of source files! 
#include "6_circle.cpp" 
#include "6_rectangle.cpp"
*/
#include <iostream>

int main() {
    Circle circle(5.0); // Creating a Circle object with radius 5.0
    Rectangle rectangle(4.0, 6.0); // Creating a Rectangle object with width 4.0 and height 6.0

    // Using the get_area() function
    std::cout << "Circle Area: " << circle.get_area() << std::endl;
    std::cout << "Rectangle Area: " << rectangle.get_area() << std::endl;

    return 0;
}

