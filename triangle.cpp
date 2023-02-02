// triangle.cpp
// Chris Bowman
// Created 1 Feb 2023
// A box is not a rectangle.
#include "triangle.h"
Triangle::Triangle(double *lengths) {
    for (int i = 0; i < NUM_SIDES; i++) { //set side lengths to the input because the setter requires the other values to be set to change one.
        if (lengths[i] <= 0) { //The setter will not work correctly if any of the values are not positive.
            sides[i] = DEFAULT;
        } else {
            sides[i] = lengths[i];
        }
    }
    for (int i = 0; i < NUM_SIDES; i++) { //run the setter to validate
        setSide(i, sides[i]);
    }
};
double Triangle::setSide(int s, double l) { //Sets a side length, given the index of the side & the desired length. Returns what the value has been set to.
    double result;
    if (s < 0 || s >= NUM_SIDES) { //fail if index is invalid
        result = -1;
    } else {
        double sumOther = 0;
        for (int i = 0; i < NUM_SIDES; i++) { //find the sum of the lengths of the other 2 sides
            sumOther += sides[i];
        }
        sumOther -= sides[s];
        if (l > sumOther || l <= 0) { //If the desired length is longer than the sum, a triangle cannot be formed.
            sides[s] = sumOther;
        } else {
            sides[s] = l;
        }
        result = sides[s];
    }
    return result;
}
double Triangle::getSide(int s) {
    return sides[s];
}
void Triangle::print() {
    for (int i = 0; i < NUM_SIDES; i++) {
        cout << "side " << i << ": " << sides[i] << ", ";
    }
    cout << endl;
}