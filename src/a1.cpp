/*!
    CS 73/273 Computational Aspects of Digital Photography C++ basecode.
*/
#include "a1.h"

using namespace std;

// Print the sum of two numbers
void helloworld(float a, float b)
{
	// Create a variable c that is the sum of a and b
	// Use cout to display the values
}

// Create an image and return it
// You can test your function by calling my_im.write(filename) to write the output somewhere
FloatImage readAnImage(const std::string &filename)
{
	// Use the constructor in floatimage.h
	return FloatImage(1,1,1); // Change this
}

// Change the brightness of the image
// const FloatImage & means a reference to im will get passed to you, 
// but the compiler won't let you modify it
FloatImage brightness(const FloatImage &im, float factor)
{
	// Create output FloatImage
	// Modify image brightness
	// return output;
	return FloatImage(1,1,1); // Change this
}

FloatImage contrast(const FloatImage &im, float factor, float midpoint)
{
	// Create output FloatImage
	// Modify image contrast
	// return output;
	return FloatImage(1,1,1); // Change this
}
