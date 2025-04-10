#include <stdio.h>

void swap(int* pa, int* pb);  // 두 변수의 값을 바꾸는 함수 선언

int main(void)
{
	int a = 10, b = 20;  // 변수 선언과 초기화
	
	swap(&a, &b);  // a의 주소와 b의 주소를 인수로 주고 함수 호출
	printf("a:%d, b:%d\n", a, b);  // 변수 a, b 출력

	return 0;
}

void swap(int* pa, int* pb)
{
	int temp;

	temp = * pa;
	*pa = *pb;
	*pb = temp;
}