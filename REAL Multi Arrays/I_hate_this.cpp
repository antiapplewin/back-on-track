#include <stdio.h>

int main() {
	int square[5][5] = {0};
	int even = 2, odd = 19, zero;
	
	for (int i = 0; i<=4;i++) {
		for (int j = 0; j <= 4; j++) {
			if (i == j) {
				square[i][j] = 0;
				zero = j;
			}
			else if (zero<j) {
				square[i][j] = even;
				even += 2;
			} else if (zero>j) {
				square[i-1][j] = odd;
				odd -= 2;
				if (odd == 7) {
					square[4][0] = 7;
					square[4][1] = 5;
					square[4][2] = 3;
					square[4][3] = 1;
				}
			}
		}
	}
	
	for (int i = 0; i<=4; i++) {
		for (int j = 0; j<=4; j++) {
			printf("%d ", square[i][j]);
		}
		printf("\n");
	}
}
