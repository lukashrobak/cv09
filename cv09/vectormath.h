#pragma once

#include <iostream>
#include <math.h>

enum typOperace { soucet = 1, vektorovySoucin, rozdil};


struct vector3d
{
	double x;
	double y;
	double z;
};

struct vector3d operace(struct vector3d u, struct vector3d v, enum typOperace typ); 
void tisk(struct vector3d u);
double skalarniSoucin(struct vector3d u, struct vector3d v);