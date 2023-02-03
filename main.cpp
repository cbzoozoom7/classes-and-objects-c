// main.cpp
// Chris Bowman
// Created 31 Jan 2023
// A box is not a rectangle.
#include "main.h"
int main(int argc, char** argv) {
    //Comments are correct answers from Wolfram Alpha for comparison
    double scalineLengths[3] = {.00389, .009, .008963}; //area | 0.0000170537 perimeter | 0.021853 interior angles | 0.4366 rad | 1.362 rad | 1.343 rad interior angle sum | 180° = π rad≈3.142 rad
    double isoscelesLengths[] = {3, 3, 5}; //area | (5 sqrt(11))/4≈4.14578 perimeter | 11 interior angles | (cos^(-1)(5/6) rad | cos^(-1)(5/6) rad | cos^(-1)(-7/18) rad)≈(0.585686 rad | 0.585686 rad | 1.97022 rad) interior angle sum | 180° = π rad≈3.142 rad
    double equilateralLengths[] = {198.466, 198.466, 198.466}; //area | 17055.8 perimeter | 595.398 interior angles | 1.047 rad | 1.047 rad | 1.047 rad interior angle sum | 180° = π rad≈3.142 rad
    double invalidLengths[] = {.32, .15, 60}; //(no planar triangle exists with sides 0.32, 0.15, 60 since 0.15 + 0.32<60)
    double badValues[] = {-53.56, 0, -999, 78};
    Triangle myScaline(scalineLengths);
    Triangle myIsosceles(isoscelesLengths);
    Triangle myEquilateral(equilateralLengths);
    Triangle myInvalid(invalidLengths);
    Triangle myDefault(badValues);
    cout << "Scaline:\t";
    myScaline.print();
    cout << "Isosceles:\t";
    myIsosceles.print();
    cout << "Equilateral:\t";
    myEquilateral.print();
    cout << "Invalid:\t";
    myInvalid.print();
    cout << "Default:\t";
    myDefault.print();
    double threeFourFive[] = {3, 4};
    RightTriangle myRightScaline(scalineLengths);
    RightTriangle myRightIsosceles(isoscelesLengths);
    RightTriangle myOtherRightIsosceles(equilateralLengths);
    RightTriangle myInvalidRight(invalidLengths);
    RightTriangle myDefaultRight(badValues);
    RightTriangle myThreeFourFive(threeFourFive);
    cout << "Right Scaline:\t";
    myRightScaline.print();
    cout << "Right Isosceles:\t";
    myRightIsosceles.print();
    cout << "Right \"Equilateral\":\t";
    myOtherRightIsosceles.print();
    cout << "Right Invalid:\t";
    myInvalidRight.print();
    cout << "Right Default:\t";
    myDefaultRight.print();
    cout << "3 4 5:\t";
    myThreeFourFive.print();
    return 0;
} 