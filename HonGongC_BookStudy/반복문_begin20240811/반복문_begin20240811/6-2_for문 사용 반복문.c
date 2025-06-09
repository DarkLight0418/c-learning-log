#include <stdio.h>

int main(void)
{
	int a = 1;
	int i;  // 반복 횟수 세는 변수

	for (i = 0; i < 3; i++)  // 초기식;조건식;실행문
	{
		a = a * 2;
	}
	printf("a : %d\n", a);

	return 0; 
}