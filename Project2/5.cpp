#include <stdio.h>
int main(void)
{
	int year = 0;
	printf("당신의 입학년도는? ");
	scanf_s("%d", &year);
	printf("입학년도: %d\n\n", year);

	int month, day;
	printf("당신의 생년월일은?");
	scanf_s("%d - %d - %d", &year, &month, &day);
	printf("생년월일: %d-%d-%d\n", year, month, day);

	int a, b, c, d;
	printf("네 정수의 합");
	scanf_s("%d, %d, %d, %d", &a, &b, &c, &d);
	printf("합: %d", a + b + c + d);

	return 0;
}