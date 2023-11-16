#include "cv09.h"
#include "vectormath.h"

int main()
{
	struct vector3d u;
	struct vector3d v;
	enum typOperace typ;
	printf("Zadajte x,y,z: ");
	scanf(" %lf, %lf, %lf", &u.x, &u.y, &u.z);
	printf("Zadajte x,y,z: ");
	scanf(" %lf, %lf, %lf", &v.x, &v.y, &v.z);
	printf("Zadajte typ operacie(1-sucet, 2-vektorovysucin,3-rozdiel): ");
	scanf("%d", &typ);
	tisk(operace(u, v, typ));
	printf("\nSkalarni sucin je: %lf", skalarniSoucin(u, v));
	return 0;
}

