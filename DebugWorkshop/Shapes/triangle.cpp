#include "triangle.h"
#include <exception>


Triangle::Triangle(float base, float height) : _base(base), _height(height)
{
}

Triangle::~Triangle()
{
}

float Triangle::get_area() const
{
	// deleted the execption
	return float(0.5 * _base * _height);
}
