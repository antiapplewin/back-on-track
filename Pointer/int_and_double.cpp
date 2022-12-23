#include <stdio.h>

void II(int *);
void ID(double *);
void CI(int *);
void CD(double *);
void PI(int *);
void PD(double *);

int main() {
	int n;
	double d;
	
	II(&n);
	ID(&d);
	PI(&n);
	PD(&d);
	CI(&n);
	CD(&d);
	PI(&n);
	PD(&d);
	return 0;
}

void II(int* pn) {
	scanf("%d", pn);
}
void ID(double* pd) {
	scanf("%lf", pd);
}
void CI(int* pn) {
	scanf("%d", pn);
}
void CD(double* pd) {
	scanf("%lf", pd);
}
void PI(int* pn) {
	printf("int : %d, ", *pn);
}
void PD(double* pd) {
	printf("double : %lf\n", *pd);
}
