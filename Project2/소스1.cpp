#include <stdio.h>

#define myprint(x)

int main(void)
{
	myprint("매크로로 출력하기");
	printf("출력함수로 출력하기\n");

	return 0;
}

#define myprint(x) printf(x); \
puts("")