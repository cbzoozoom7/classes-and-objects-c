// rightTriangle.h
// Chris Bowman
// Created 2 Feb 2023
// A box is not a rectangle.
#ifndef CLASSES_RIGHTTRIANGLE
    #define CLASSES_RIGHTTRIANGLE
    #define NUM_LEGS 2

    #include "triangle.h"
    
    class RightTriangle: public Triangle {
        RightTriangle(double[2]);
    };
#endif //CLASSES_RIGHTTRIANGLE