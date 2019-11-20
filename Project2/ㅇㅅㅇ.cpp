#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main(void)
{
	int i, j;

	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 4; j++)
		{
				printf("%d", i + j);
		}
		printf("\n");
	}
	return 0;
}