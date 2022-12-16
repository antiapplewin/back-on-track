#include <stdio.h>

int main() {
	char ch[3];
	int in;
	scanf("%c%c%c", &ch[0], &ch[1], &ch[2]);
	for (int i = 0; i<=2; i++) {
		printf("%d", ch[i]-48);
	}
	return 0;
}
