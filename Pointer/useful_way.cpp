#include <stdio.h>

void Input(int *);
void SwapData(int *, int *);

int main() {
	int n, m;
	
	Input(&n);
	Input(&m);
	printf("Before : ");
	printf("n = %d, m = %d\n", n, m);
	SwapData(&n, &m);
	printf("After : ");
	printf("n = %d, m = %d", n, m);
	return 0;
}

void Input(int* pn) {
	printf("Pick a number or whatever : ");
	scanf("%d", pn);
}

void SwapData(int* pd1, int* pd2) {
	int a = *pd1;
	*pd1 = *pd2;
	*pd2 = a;
}
