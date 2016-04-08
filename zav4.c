#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int min_mas(int *mas, int k);

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int mas[15];
	int i;
	
	srand(time(0));
	
	for(i = 0; i < 15; i ++){
		mas [i] = rand()%130 - 30;
		printf("\t mas [%d] = %d\n", i, mas[i]);
	}
	
	i = min_mas(mas, 15);
	printf("Minimal'ne chislo = %d v mas [%d]", mas [i], i);
	
	return 0;
}

int min_mas (int *mas, int k){
	int i, min;
	min = 0;
	for (i=0; i < k; i++)
		if (mas[i] < min)
		min = i;
		return min;
}
