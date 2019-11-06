#define _CRT_SECURE_NO_WARNINGS_

#include <stdio.h>

int main(void)
{
	double a = 0;
	printf("킬로그램(kg)입력: ");
	scanf_s("%lf", &a);

	printf("입력 값의 파운드:%.3lf", a * 0.453592);

	return 0;
}
