#include <stdio.h>

int main(void)
{
	int a = 1;

	do  // 반복문 시작 위치
	{
		a = a * 2;
	} while (a < 10);  // a가 10보다 작으면 9행 반복
	printf("a : %d\n", a);

	return 0;
}