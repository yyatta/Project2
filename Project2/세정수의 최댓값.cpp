#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main(void)
{
	int a, b, c;
	printf("세 정수를 입력하시오: ");
	scanf_s("%d %d %d", &a, &b, &c);

	if (a > b) {
		if (a > c)
			printf("최대수: %d\n", a);
		else
			printf("최대수: %d\n", c);
	}
	else {
		if (b > c)
			printf("최대수 : %d\n", b);
		else
			printf("최대수 : %d\n", c);
	}

	return 0;
}