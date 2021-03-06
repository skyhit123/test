/*
 * circle.h
 *
 *  Created on: Oct 5, 2014
 *      Author: liwei
 */

#ifndef CIRCLE_H_
#define CIRCLE_H_

#include <iostream>
#include "point.h"
using namespace std;

class Circle : public Point
{
public:
	Circle(double x = 0, double y =0, double r =0);
	virtual ~Circle();
	void SetRadius (double);
	double GetRadius () const;
	virtual double area () const;
	friend ostream & operator << (ostream &, const Circle&);

	virtual void ShapeName() const {cout << "Circle: " << endl;}

protected:
	double radius;
};


#endif /* CIRCLE_H_ */
