#include <stdio.h>
int main(void)
{
	int year = 0;
	printf("����� ���г⵵��? ");
	scanf_s("%d", &year);
	printf("���г⵵: %d\n\n", year);

	int month, day;
	printf("����� ���������?");
	scanf_s("%d - %d - %d", &year, &month, &day);
	printf("�������: %d-%d-%d\n", year, month, day);

	int a, b, c, d;
	printf("�� ������ ��");
	scanf_s("%d, %d, %d, %d", &a, &b, &c, &d);
	printf("��: %d", a + b + c + d);

	return 0;
}