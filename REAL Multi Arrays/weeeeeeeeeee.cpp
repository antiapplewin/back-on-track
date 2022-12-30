#include <stdio.h>

int main() {
	int w[5][5] = {0};
	int now = 0, wow = 0;
	
	for (int i = 0;i<=4;i++) {
		for (int j = 0; j<=4;j++) {
			now += 1;
			if (now<6) {
				w[i][j] = now;
			} else if (now<10) {
				wow += 1;
				w[wow][4] = now;
			} else if (now<14) {
				if (wow==4) {
					wow = 0;
				}
				wow += 1;
				w[4][4-wow] = now;
			} else if (now<17) {
				if (wow==4) {
					wow = 0;
				}
				wow += 1;
				w[4-wow][0] = now;
			} else if (now<20) {
				if (wow==3) {
					wow = 0;
				}
				wow += 1;
				w[1][wow] = now;
			} else if (now<22) {
				if (wow==3) {
					wow = 1;
				}
				wow += 1;
				w[wow][3] = now;
			} else if (now<24) {
				if (wow==3) {
					wow = 1;
				}
				wow += 1;
				w[3][4-wow] = now;
			}
			w[2][1] = 24;
			w[2][2] = 25;
		}
	}
	
	for(int i = 0;i<=4;i++) {
		for (int j=0; j<=4;j++) {
			printf("%d ", w[i][j]);
		}
		printf("\n");
	}
}
