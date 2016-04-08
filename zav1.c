#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	double x, y, d, x1, y1, x2, y2,x3,y3, z;
	printf("Vvedite x:");
	scanf("%lf", &x);
	printf("Vvedite y:");
	scanf("%lf", &y);
	x1 = -35, y1 = 40;
	x2 = x1 - x;
	y2 = y1 - y;
	x3 = x2 * x2;
	y3 = y2 * y2;
	z = x3 + y3;
	d = pow(z, 1.0/2);
	printf("%.1lf", d);
	return 0;
}
