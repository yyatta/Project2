#define _CRT_SECURE_NO_WARNINGS_

#include <stdio.h>

int main(void)
{
	double a = 0;
	printf("ų�α׷�(kg)�Է�: ");
	scanf_s("%lf", &a);

	printf("�Է� ���� �Ŀ��:%.3lf", a * 0.453592);

	return 0;
}
