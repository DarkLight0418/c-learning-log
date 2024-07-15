#include <stdio.h>

int main(void)
{
	double apple;  // 실수
	int banana;  // 정수
	int orange;  // 정수

	apple = 5.0 / 2.0;  //실수 실수 나누기 연산(/)
	banana = 5 / 2;  // 정수 정수 나누기 연산(/)
	orange = 5 % 2;  // 정수 정수 나머지 연산(%)

	printf("apple : %.1lf\n", apple);
	printf("banana : %d\n", banana);
	printf("orange : %d\n", orange);

	return 0;
}