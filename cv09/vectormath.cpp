#include "vectormath.h"

struct vector3d operace(struct vector3d u, struct vector3d v, enum typOperace typ){
	struct vector3d w;
	switch (typ) {
	case soucet: 
		w.x = u.x + v.x;
		w.y = u.y + v.y;
		w.z = u.z + v.z;
	case vektorovySoucin:
		w.x = (u.y * v.z - u.z * v.y);
		w.y = (u.z * v.x - u.x * v.z);
		w.z = (u.x * v.y - u.y * v.x);
	case rozdil:
		w.x = u.x - v.x;
		w.y = u.y - v.y;
		w.z = u.z - v.z;
	}
	return w;
}

void tisk(struct vector3d u) {
	printf("w = (%lf ,%lf ,%lf)", u.x, u.y, u.z);
	double result;
	result = sqrt(pow(u.x, 2) + pow(u.y, 2) + pow(u.z, 2));
	printf("\nw = |%lf| ", result);
}

double skalarniSoucin(struct vector3d u, struct vector3d v) {
	return (u.x * v.x + u.y * v.y + u.z * v.z);
}