#include <stdio.h>

int main(void)
{
	int a;		// int형 변수 a 선언
	int b, c, d;		// 2개의 int형 변수 b, c 동시 선언(+ d 추가 3개 변수)
	double da;		// double형 변수 da 선언
	char ch;		// char형 변수 ch 선언

	a = 10;
	b = a + 10;
	c = a + 20;
	d = a;
	da = 3.5;
	ch = 'A';		// "A" == $

	printf("변수 a의 값 : %d\n", a);
	printf("변수 b의 값 : %d\n", b);
	printf("변수 c의 값 : %d\n", c);
	printf("변수 d의 값 : %d\n", d);
	printf("변수 da의 값 : %.1lf\n", da);
	printf("변수 ch의 값 : %c\n", ch);
	
	d = 0;

	printf("변수 d의 수정된 값 : %d\n", d);

	return 0;
}