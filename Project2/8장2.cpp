#include <stdio.h>

int main()
{
	int data1 = 10, data2 = 20;
	int sum = 0;
	int* p;

	p = &data1;
	*p = 100;

	p = &data2;
	*p = 200;

	sum = data1 + data2;
	printf("두 변수의 합: %d\n", sum);

	return 0;
}