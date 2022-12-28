#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
	int ar[6][6] = {0};
	int i, j, sum = 0, z = 0;
	
	srand(time(NULL));
	
	for(i = 0; i<6;i++) {
		for (j = 0; j<7;j++) {
			ar[i][j] = rand()%99+1;
			sum += ar[i][j];
		}
	}
	
	i = 0;
	
	while (i<6) {
		j = 0;
		while (j<7) {
			printf("%3d", ar[i][j]);
			j++;
		}
		printf("\n");
		i++;
	}
	
	printf("\n");
	
	printf("%d", sum);
	
	for(i = 0; i<6;i++) {
		for (j = 0; j<7;j++) {
			if (ar[i][j] >= z) {
				z = ar[i][j];
			}
		}
	}
	
	printf("\n\n");
	printf("%d", z);
	
	return 0;
}
