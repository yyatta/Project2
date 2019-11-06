#include <stdio.h>

#define MAX 100

int main(void)
{
	int n = 0;

	while (n <= MAX) {
		if (n % 2 == 1)
			printf("%d\n", n++);
		n = n + 1;
	}

	return 0;
}