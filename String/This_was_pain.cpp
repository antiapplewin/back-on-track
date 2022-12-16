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
	int o, word = 1;
	
	for (;ch[o] != '.'; o++) {
	}
	
	for (int i=0; i<= o; i++) {
		if (ch[i]==' '){
			word += 1;
		}
	}
	
	printf("%d", word);
}
