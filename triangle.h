// triangle.h
// Chris Bowman
// Created 1 Feb 2023
// A box is not a rectangle.
#ifndef CLASSES_TRIANGLE
    #define CLASSES_TRIANGLE
    #define DEFAULT = 1;
    class Triangle {
        public:
            //constructors
            Triangle(double, double, double);
        protected:
            double a, b, c; //the side lengths of the triangle
    };
#endif //CLASSES_TRIANGLE