#define _CRT_SECURE_NO_WARNINGS_

#include <stdio.h>

int main(void)
{
	int a, b;
	printf("�� ������ �Է��Ͻÿ�: ");
	scanf_s("%d %d", &a, &b);

	if (a > b) {
		printf("��:%d\n", a / b);
		printf("������:%d ", a % b);
	}
	else {
		printf("��:%d\n ", b / a);
		printf("������:%d ", b % a);
	}
	return 0;
}