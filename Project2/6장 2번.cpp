#define _CRT_SECURE_NO_WARNINGS_

#include <stdio.h>

int main()
{

	double a = 0, b = 0;
	int c = 0;

	printf("두 실수 입력:");
	scanf_s("%lf %lf", &a, &b);

	printf("연산종류 번호선택 1(+), 2(-), 3(*), 4(/):");
	scanf_s("%d", &c);
	if (c == 1) {
		printf("%.2lf + %.2lf = %.2lf", a, b, a + b);
	}
	else if (c == 2) {
		printf("%.2lf - %.2lf = %.2lf", a, b, a - b );
	}
	else if (c == 3) {
		printf("%.2lf * %.2lf = %.2lf", a, b, a * b);
	}
	else if (c == 4) {
		printf("%.2lf / %.2lf = %.2lf", a, b, a / b);
	}

	return 0;
}