#include <stdio.h>

int main() {
	char alphabet;
	int i;
	for (i = 65; i <= 90; i++) {
		alphabet = i;
		printf("%c ", alphabet);
	}
	printf("\n");
	for (i = 97; i<=122;i++) {
		alphabet = i;
		printf("%c ", alphabet);
	}
	return 0;
}
