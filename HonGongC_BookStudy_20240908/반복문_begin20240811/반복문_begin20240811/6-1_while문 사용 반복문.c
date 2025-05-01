#include <stdio.h>

int main(void)
{
	int a = 1;  // 변수 선언 후 곱셈을 하기 위해 1로 초기화

	while (a < 10)
	{
		a = a * 2;
	}
	printf("a : %d\n", a);

	return 0;
}