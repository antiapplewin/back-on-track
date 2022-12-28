#include <stdio.h>

int main() {
	int ar[6][9] = {{0, 0, 0, 1, 0, 0, 0, 0, 0}, 
	{0, 0, 0, 0, 0, 0, 0, 2, 0}, {0, 0, 0, 0, 1, 0, 0, 0, 0}, 
	{0, 2, 0, 1, 0, 0, 1, 0, 0}, {0, 0, 0, 1, 0, 0, 0, 0, 0}, 
	{0, 0, 1, 0, 0, 0, 1, 0, 0}};
	
	int one_gasu = 0;
	
	for (int i = 0;i<=5;i++) {
		for (int j = 0;j<=8; j++) {
			 if(ar[i][j] == 1) {
			 	one_gasu += 1;
			 }
		}
	}
	printf("%d \n\n", one_gasu);
	
	for (int i = 0;i<=5;i++) {
		for (int j = 0;j<=8; j++) {
			 if(ar[i][j] == 2) {
			 	printf("ar[%d][%d] ", i, j);
			 }
		}
	}
	
	printf("\n\n");
	
	for (int i = 0;i<=5;i++) {
		for (int j = 0;j<=8; j++) {
			 if(ar[i][j] == 2) {
			 	ar[i-1][j] = 5;
			 	ar[i+1][j] = 5;
			 	ar[i][j-1] = 5;
			 	ar[i][j+1] = 5;
			}
		}
	}
	
	for (int i = 0;i<=5;i++) {
		for (int j = 0;j<=8; j++) {
			printf("%d ", ar[i][j]);
		}
		printf("\n");
	}
	
	printf("\n");
	
	for (int i = 0;i<=5;i++) {
		for (int j = 0;j<=8; j++) {
			 if(ar[i][j] != 0) {
			 	ar[i][j] = 0;
			 } else {
			 	ar[i][j] = 1;
			 }
		}
	}
	
	for (int i = 0;i<=5;i++) {
		for (int j = 0;j<=8; j++) {
			printf("%d ", ar[i][j]);
		}
		printf("\n");
	}
	
	return 0;
}
