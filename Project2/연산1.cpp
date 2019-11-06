#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main(void)
{
	double x = 0, y = 0, result = 0;

	printf("두 정수를 입력하시오: ");
	scanf_s("%lf %lf", &x, &y);

	if (x > y) {
		result = x / y;
	}
	else if (x == y) {
		result = x * y;
	}
	else {
		result = x + y;
	}

	printf("연산 결과: %.2f\n", result);

	return 0;
}