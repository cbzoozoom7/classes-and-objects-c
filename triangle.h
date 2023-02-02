// triangle.h
// Chris Bowman
// Created 1 Feb 2023
// A box is not a rectangle.
#ifndef CLASSES_TRIANGLE
    #define CLASSES_TRIANGLE
    #define DEFAULT 1
    class Triangle {
        public:
            //Constructors
            Triangle(double[3]);
            //Setters
            double setSide(int, double); //sets a side length, given the index of the side & the desired length
        protected:
            double sides[3]; //the side lengths of the triangle
    };
#endif //CLASSES_TRIANGLE