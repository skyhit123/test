/*
 * cylinder.h
 *
 *  Created on: Oct 5, 2014
 *      Author: liwei
 */

#ifndef CYLINDER_H_
#define CYLINDER_H_

#include <iostream>
#include "circle.h"
using namespace std;

class Cylinder: public Circle
{
public:
	Cylinder(double x = 0, double y = 0, double r = 0, double h = 0);
	~Cylinder();
	void SetHeight (double);
	double GetHeight() const;
	virtual double area() const;
	virtual double volume() const;
	friend ostream & operator << (ostream &, const Cylinder&);

	virtual void ShapeName() const {cout << "Cylinder: " << endl;}

private:
	double height;
};

#endif /* CYLINDER_H_ */
