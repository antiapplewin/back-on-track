#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
	srand(time(NULL));
	int fat, high, bomb, h, w;
	scanf("%d", &fat);
	scanf("%d", &high);
	scanf("%d", &bomb);
	bomb += 1;
	int mines[high][fat] = {0};
	
	for (int i = 0; i<=bomb;i++) {
		h = rand()%(high-0+1)+0;
		w = rand()%(fat-0+1)+0;
		for (;mines[h][w] == -1;) {
			printf("dude\n");
			h = rand()%(high-0+1)+0;
			w = rand()%(fat-0+1)+0;
		}
		mines[h][w] = -1;
	}
	
	for (int i = 0; i<=high-1; i++) {
		for (int j = 0; j<=fat-1; j++) {
			printf("%d ", mines[i][j]);
		}
		printf("\n");
	}
}
