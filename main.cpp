// main.cpp
// Chris Bowman
// Created 31 Jan 2023
// A box is not a rectangle.
#include "main.h"
int main(int argc, char** argv) {
    double scalineLengths[3] = {.00389, .009, .008963};
    double isoscelesLengths[] = {3, 3, 5};
    double equilateralLengths[] = {198.466, 198.466, 198.466};
    double invalidLengths[] = {.32, .15, 60};
    double badValues[] = {-53.56, 0, -999, 78};
    Triangle myScaline(scalineLengths);
    Triangle myIsosceles(isoscelesLengths);
    Triangle myEquilateral(equilateralLengths);
    Triangle myInvalid(invalidLengths);
    Triangle myDefault(badValues);
    cout << "Scaline: ";
    myScaline.print();
    cout << "Isosceles: ";
    myIsosceles.print();
    cout << "Equilateral: ";
    myEquilateral.print();
    cout << "Invalid: ";
    myInvalid.print();
    cout << "Default: ";
    myDefault.print();
    return 0;
}