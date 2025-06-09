#include <stdio.h>

int main(void)
{
	int a = 10;

	if (a >= 0)
	{
		a += 1;   // a가 0보다 크면 a에 1 더해줌
	}
	else
	{
		a -= 1;   // a가 0보다 작으면 a에서 1 빼줌
	}

	printf("a : %d\n", a);

	return 0;
}