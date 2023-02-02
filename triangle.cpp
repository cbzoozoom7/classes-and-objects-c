// triangle.cpp
// Chris Bowman
// Created 1 Feb 2023
// A box is not a rectangle.
#include "triangle.h"
Triangle::Triangle(double *lengths) {
    for (int i = 0; i < 3; i++) { //set side lengths to the input because the setter requires the other values to be set to change one.
        sides[i] = lengths[i];
    }
    for (int i = 0; i < 3; i++) { //run the setter to validate
        setSide(i, sides[i]);
    }
};
double Triangle::setSide(int s, double l) { //sets a side length, given the index of the side & the desired length
    if (s >= 0 || s <= 2) { //fail if index is invalid
        double sumOther;
        if (l <= 0) {
            sides[s] = DEFAULT;
        } else {
            for (int i = 0; i < 3; i++) { //find the sum of the lengths of the other 2 sides
                sumOther += sides[i];
            }
            sumOther -= sides[s];
            if (l > sumOther) { //If the desired length is longer than the sum, a triangle cannot be formed.
                sides[s] = sumOther;
            } else {
                sides[s] = l;
            }
        }
    }
    return sides[s];
}