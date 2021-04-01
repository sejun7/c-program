#include <stdio.h>

int main() {
	int i, j, k;
	int a, b, c;
	for (a = 0; a < 5; a++)  // *갯수가 1개부터 9개까지 증가하면서 내려가는 코드
	{
		for (b = 1; b < 5 - a; b++)
			printf(" ");
		for (c = 0; c < (a * 2) + 1; c++)
			printf("*");
		printf("\n");
	}
	for (i = 0; i < 4; i++) // *갯수가 7개부터 1개까지 감소하면서 내려가는 코드
	{
		for (j = 8; j > 7 - i; j--)
			printf(" ");
		for (k = 7; k >= (i * 2) + 1; k--)
			printf("*");
		printf("\n");
	}
	return 0;
}