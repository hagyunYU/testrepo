
#include "pch.h"
#include <stdio.h>

int main()
{
	int sum = 0;
	for (int i = 0; i < 5; i++)
	{
		printf("%d", sum);
		sum++;
	}
	printf("\n");
	for (int i = 5; i < 10; i++)
	{
		printf("    %d\n", sum);
		sum++;
	}
	sum = 8;
	while (1)
	{
		printf("HelloWORLD");
	}
	char bingo[5][5];
	
	for (int k = 0; k < 5; k++)
	{
		bingo[k][0] = 1;
		bingo[2][k] = 5;
	}
}
