#include <stdio.h>

int main()
{
	char star = '*';
	char* pstar = &star;

	printf("�ּ�: %d �ڵ尪: %d ����: %c\n", &pstar, *pstar, *pstar);

	return 0;
}