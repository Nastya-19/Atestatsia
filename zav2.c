#include <stdio.h>
#include <stdlib.h>


/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	double a, b, c, d, f, g, h, x, z, y;
	printf("Vvedite x:");
	scanf("%lf", &x);	
	
	if (x < 1328){
		a = 0, b = 1, c = 1, d = 3, f = -5, g = 0.005, h = 0;
		z = b /(c+d*exp(f+g*(x+h)));
		y = a + z;
		printf("y = %lf", y);
	} else {
		if (x >= 1328){
			a = 0, b = 7, c = 4, d = 1, f = -5, g = 0.004, h=1100;
			z = b /(c+d*exp(f+g*(x+h)));
			y = a + z;
			printf("y = %lf", y);
		}	
	}
	return 0;
}
