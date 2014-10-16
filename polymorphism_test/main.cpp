/*
 * main.cpp
 *
 *  Created on: Oct 5, 2014
 *      Author: liwei
 */

#include <iostream>
#include "point.h"
#include "circle.h"
#include "cylinder.h"
#include "shape.h"
using namespace std;


int main(int agrc, char* agrv[])
{
	Point po(0.1,0.2);
	Circle co(0.5,0.6,0.7);
	Cylinder cl(1.0,2.0,3.0,4.0);

    Shape *p;
    p = &po;
    p->ShapeName();

    p = &co;
    p->ShapeName();

    p = &cl;
    p->ShapeName();

    return 0;
}



