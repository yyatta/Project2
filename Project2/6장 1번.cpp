#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main(void)
{
	int a;

	printf("������ �Է��Ͻÿ�: ");
	scanf_s("%d", &a);

	if (a < 90) {
		printf("%d�� 1��и��Դϴ�.", a);
	}
	else if (a == 90) {
		printf("%d�� ���� X���Դϴ�.", a);
	}
	else if (a < 180) {
		printf("%d�� 2��и��Դϴ�.", a);
	}
	else if (a == 180) {
		printf("%d�� ���� Y���Դϴ�.", a);
	}
	else if (a < 270) {
		printf("%d�� 3��и��Դϴ�.", a);
	}
	else if (a == 270) {
		printf("%d�� ���� X���Դϴ�.", a);
	}
	else if (a < 360) {
		printf("%d�� 4��и��Դϴ�.", a);
	}
	else if (a == 360) {
		printf("%d�� ���� Y���Դϴ�.", a);
	}
	else
		printf("�����̰ų� 360�� �ʰ��ϼ̽��ϴ�.");
	
	return 0;
}