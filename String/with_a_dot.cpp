#include <stdio.h>

int main() {
	char ch[100];
	int o=0;
	scanf("%s", ch);
	for (int i = 0; ;i++) {
		if (ch[i] != '.') {
			if (ch[i] == '\0') {
				break;
			}
			printf("%d", ch[i]-48);
		} else {
			printf(".");
		}
	}
	return 0;
}
