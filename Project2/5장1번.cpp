#define _CRT_SECURE_NO_WARNINGS_

#include <stdio.h>

int main(void)
{
	int a, b;
	printf("두 정수를 입력하시오: ");
	scanf_s("%d %d", &a, &b);

	if (a > b) {
		printf("몫:%d\n", a / b);
		printf("나머지:%d ", a % b);
	}
	else {
		printf("몫:%d\n ", b / a);
		printf("나머지:%d ", b % a);
	}
	return 0;
}