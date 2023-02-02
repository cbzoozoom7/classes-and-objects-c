// triangle.cpp
// Chris Bowman
// Created 1 Feb 2023
// A box is not a rectangle.
#include "triangle.h"
Triangle::Triangle(double a, double b, double c) {
    if (a > b + c) { //Make sure that the longest side is no longer than the sum of the others, as is required to form a triangle.
        a = b + c;
    } else if (b > a + c) {
        b = a + c;
    } else if (c > a + b) {
        c = a + b;
    };
    this -> a = a;
    this -> b = b;
    this -> c = c;
};