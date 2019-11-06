#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main(void)
{
	int a;

	printf("각도를 입력하시오: ");
	scanf_s("%d", &a);

	if (a < 90) {
		printf("%d는 1사분면입니다.", a);
	}
	else if (a == 90) {
		printf("%d는 양의 X축입니다.", a);
	}
	else if (a < 180) {
		printf("%d는 2사분면입니다.", a);
	}
	else if (a == 180) {
		printf("%d는 양의 Y축입니다.", a);
	}
	else if (a < 270) {
		printf("%d는 3사분면입니다.", a);
	}
	else if (a == 270) {
		printf("%d는 음의 X축입니다.", a);
	}
	else if (a < 360) {
		printf("%d는 4사분면입니다.", a);
	}
	else if (a == 360) {
		printf("%d는 음의 Y축입니다.", a);
	}
	else
		printf("음수이거나 360을 초과하셨습니다.");
	
	return 0;
}