#define _CRT_SECURE_NO_WARNINGS_

#include <stdio.h>

int main()
{
	int data = 100;
	char ch = 'A';
	int* ptrint = &data;
	char* ptrchar = &ch;
	printf("간접참조 출력, %d %c\n", data, ch);

	*ptrint = 200;
	printf("직접참조 출력: %d %c\n", data, ch);
}