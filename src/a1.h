/*!
    CS 73/273 Computational Aspects of Digital Photography C++ basecode.
*/
#include <iostream>
#include "floatimage.h"

// Print the sum of two numbers
void helloworld(float a, float b);

// Create an image and return it
FloatImage readAnImage(const std::string &filename);

FloatImage brightness(const FloatImage &im, float factor);

FloatImage contrast(const FloatImage &im, float factor, float midpoint = 0.5f);
