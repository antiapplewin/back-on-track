#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
	int one=0, two=0, three=0, four=0, five=0, six=0, seven;
	int arr[100000] = {0};
	srand(time(NULL));
	for (int i = 0; i<=99999; i++) {
		seven = rand()%(6-1+1)+1;
		arr[i] = seven;
	}
	for (int i = 0; i<=100000; i++) {
		if (arr[i] == 1) {
			one += 1;
		} else if (arr[i] == 2) {
			two += 1;
		} else if (arr[i] == 3) {
			three += 1;
		} else if (arr[i] == 4) {
			four += 1;
		} else if (arr[i] == 5) {
			five += 1;
		} else{
			six += 1;
		}
	}
	printf("1 = %d, 2 = %d, 3 = %d, 4 = %d, 5 = %d, 6 = %d", one, two, three, four, five, six);
}
