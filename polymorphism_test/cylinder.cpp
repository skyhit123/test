/*
 * cylinder.cpp
 *
 *  Created on: Oct 5, 2014
 *      Author: liwei
 */

#include "cylinder.h"

Cylinder::Cylinder(double x, double y, double r, double h): Circle(x,y,r),height(h)
{
}

Cylinder::~Cylinder()
{
	cout << "cylinder destroyed!" << endl;
}

void Cylinder::SetHeight (double h)
{
	height = h;
}

double Cylinder::GetHeight() const
{
	return height;
}

double Cylinder::area() const
{
	return 2*Circle::area() + 2 * 3.14159 * radius * radius;
}

double Cylinder::volume() const
{
	return Circle::area() * height;
}

ostream & operator << (ostream & output, const Cylinder& cylinder)
{
	output << "Center: " << "(" << cylinder.x << "," << cylinder.y << ")" << " , radius: " << cylinder.radius;
	output << " , height: " << cylinder.height << " , area: " << cylinder.area() << " , volume: " << cylinder.volume() << endl;
	return output;
}


