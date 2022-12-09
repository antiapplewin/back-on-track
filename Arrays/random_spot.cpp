#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
	int arr[9] = {0};
	int a, b;
	srand(time(NULL));
	scanf("%d", &a);
	for (int i = 0; i<= a; i++) {
		b = rand()%10;
		for (;arr[b]==-1;) {
			b = rand()%10;
		}
		arr[b] = -1;
	}
	printf("%d %d %d %d %d %d %d %d %d %d",arr[0],arr[1],arr[2],arr[3],arr[4],arr[5],arr[6],arr[7], arr[8], arr[9]);
	return 0;
}
