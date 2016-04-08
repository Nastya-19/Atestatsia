#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	double a, x, n;
	int i;
	printf("Protzent richnuh sostavlyaet: ");
	scanf("%lf", &a);
	printf("Skol'ko vklada vu vnesete? - ");
	scanf("%lf", &x);
	
	n = 2 * x;
	while ( x < n) {
		i ++;
		x = x + ((x/100) * a);
	}
	printf ("Cherez %d rokiv y vas bydet vklad %lf", i, x);
	return 0;
}
