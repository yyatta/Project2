#include <stdio.h>

#define myprint(x)

int main(void)
{
	myprint("��ũ�η� ����ϱ�");
	printf("����Լ��� ����ϱ�\n");

	return 0;
}

#define myprint(x) printf(x); \
puts("")