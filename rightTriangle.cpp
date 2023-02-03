// rightTriangle.cpp
// Chris Bowman
// Created 2 Feb 2023
// A box is not a rectangle.
#include "rightTriangle.h"
RightTriangle::RightTriangle(double *legs) {
    //Pointers are not slay U_U
    for (int i = 0; i < NUM_LEGS; i++) {
        sides[i] = DEFAULT;
    }
    sides[NUM_SIDES - 1] = sqrt(2);
    for (int i = 0; i < NUM_LEGS; i++) {
        setSide(i, legs[i]);
    }
}
double RightTriangle::setSide(int s, double l) {
    double result;
    if (s < 0 || s>= NUM_LEGS) {
        result = -1;
    } else {
        if (l > 0) {
            sides[s] = l;
            double pythagoreanA2B2 = 0;
            for (int i = 0; i < NUM_LEGS; i++) {
                pythagoreanA2B2 += pow(sides[i], 2);
            }
            sides[NUM_SIDES - 1] = sqrt(pythagoreanA2B2);
        }
        result = sides[s];
    }
    return result;
}
double RightTriangle::getArea() {
    double area = 1;
    for (int i = 0; i < NUM_LEGS; i++) { //yes, a for loop for multiplying 2 values together B)
        area *= sides[i];
    }
    area *= .5;
    return area;
}