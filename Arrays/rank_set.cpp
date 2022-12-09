#include <stdio.h>

int main() {
	double avg[10] = {98.5, 1.4, 83.2, 90, 78.3, 85, 95, 50, 32.7, 99.9};
	// change the value in this arr
	int rank[10] = {0};
	int a;

	for (int i = 0; i < 10; i++) {
		a = 0;
		for (int j = 0; j < 10; j++) {
			if (avg[i] < avg[j]) {
				a++;
			}
		}
		rank[i] = a + 1;
	}

	for (int i = 0; i < 10; i++) { 
		printf("%d ", rank[i]);
	}

	return 0;

}
