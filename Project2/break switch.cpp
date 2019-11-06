#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main(void)
{
	int month;
	scanf_s("%d", &month);
	printf("월을 입력하시오:");

    

	if (month == 4 || month == 5) {
		printf("%d는 봄입니다.", month);
	}
	else if (month == 6 || month == 7 || month == 8) {
		printf("%d는 여름입니다.", month);
	}
	else if (month == 9 || month == 10 || month == 11) {
		printf("%d는 가을입니다.", month);
	}
	else if (month == 12 || month == 1 || month == 2 || month == 3) {
		printf("%d는 겨울입니다.", month);
	}
	else
		printf("월을 잘못 입력하셨습니다");
	return 0;
}