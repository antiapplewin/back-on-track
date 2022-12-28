#include <stdio.h>

int main() {
	int ar1[3][4] = {0};
	int ar2[][4] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12};
	int ar3[3][4] = {{1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12}};
	int i, j;
	
	for (i = 0; i<=2; i++) {
		for (j = 0; j<=3;j++) {
			printf("%d ", ar1[i][j]);
		}
		printf("\n");
	}
	
	printf("\n");
	
	for (i = 0; i<=2; i++) {
		for (j = 0; j<=3;j++) {
			printf("%d ", ar2[i][j]);
		}
		printf("\n");
	}
	
	printf("\n");
	
	for (i = 0; i<=2; i++) {
		for (j = 0; j<=3;j++) {
			printf("%d ", ar3[i][j]);
		}
		printf("\n");
	}
	
	return 0;
}
