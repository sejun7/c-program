#include <stdio.h>

int main() {
	int i, j, k;
	int a, b, c;
	for (a = 0; a < 5; a++)  // *������ 1������ 9������ �����ϸ鼭 �������� �ڵ�
	{
		for (b = 1; b < 5 - a; b++)
			printf(" ");
		for (c = 0; c < (a * 2) + 1; c++)
			printf("*");
		printf("\n");
	}
	for (i = 0; i < 4; i++) // *������ 7������ 1������ �����ϸ鼭 �������� �ڵ�
	{
		for (j = 8; j > 7 - i; j--)
			printf(" ");
		for (k = 7; k >= (i * 2) + 1; k--)
			printf("*");
		printf("\n");
	}
	return 0;
}