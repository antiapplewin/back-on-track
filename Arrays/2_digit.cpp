#include <stdio.h>

int main () {
	int digit[10]={0};
	int player_number, i = 0, full = 0, x = 0;
	
	scanf("%d", &player_number);
	for (;player_number != 0;) {
		digit[i] = player_number%2;
		printf("%d \n",digit[i]);
		player_number /= 2;
		i++;
	}
	
	printf("32의 이진수 : ");
	
	for (int x = i-1 ; x>=0 ;x--) {
		printf("%d", digit[x]);
	}
	
	printf(" (2)");
	return 0;
}
