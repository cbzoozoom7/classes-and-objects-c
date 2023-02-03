// rightTriangle.cpp
// Chris Bowman
// Created 2 Feb 2023
// A box is not a rectangle.
#include "rightTriangle.h"
RightTriangle::RightTriangle(double *legs) {
    //Pointers are not slay U_U
    double pythagoreanA2B2 = 0;
    for (int i = 0; i < NUM_LEGS; i++) {
        sides[i] = legs[i];
        pythagoreanA2B2 += pow(legs[i], 2);
    }
    sides[NUM_SIDES] = sqrt(pythagoreanA2B2);
}