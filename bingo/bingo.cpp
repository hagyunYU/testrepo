
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
}
