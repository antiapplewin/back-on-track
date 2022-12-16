#include <stdio.h>

int main() {
	char ch[100];
	int o=0;
	scanf("%s", ch);
	
	for (;ch[o] != '\0'; o++) {
	}
	
	for (int i = o; i>=0; i--) {
		printf("%c", ch[i]);
	}
	
}
