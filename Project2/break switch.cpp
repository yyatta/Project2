#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main(void)
{
	int month;
	scanf_s("%d", &month);
	printf("���� �Է��Ͻÿ�:");

    

	if (month == 4 || month == 5) {
		printf("%d�� ���Դϴ�.", month);
	}
	else if (month == 6 || month == 7 || month == 8) {
		printf("%d�� �����Դϴ�.", month);
	}
	else if (month == 9 || month == 10 || month == 11) {
		printf("%d�� �����Դϴ�.", month);
	}
	else if (month == 12 || month == 1 || month == 2 || month == 3) {
		printf("%d�� �ܿ��Դϴ�.", month);
	}
	else
		printf("���� �߸� �Է��ϼ̽��ϴ�");
	return 0;
}