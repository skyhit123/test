/*
 * point.h
 *
 *  Created on: Oct 5, 2014
 *      Author: liwei
 */

#ifndef POINT_H_
#define POINT_H_

#include <iostream>
#include "shape.h"
using namespace std;

class Point: public Shape
{
public:
     Point(double , double); //define the default parameter in the declaration
     Point();
     virtual ~Point();
     void SetCoordinate(double, double);
     double getX() const;
     double getY() const;
     friend ostream & operator << (ostream &, const Point&);

     virtual void ShapeName() const;
protected:
     double x, y;
};



#endif /* POINT_H_ */
