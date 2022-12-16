#include <stdio.h>

int main()
{
	char ch[100];
	for (int i = 0; i<= 100; i++) {
		ch[i] = getchar();
		if (ch[i] == '.') {
			break;
		}
	}
	int o;
	
	for (;ch[o] != '.'; o++) {
	}
	
	printf("%d", o+1);
}
