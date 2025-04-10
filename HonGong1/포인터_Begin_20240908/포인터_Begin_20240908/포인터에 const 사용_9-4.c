#include <stdio.h>

int main(void)
{
	int a = 10, b = 20;
	const int* pa = &a;  // 포인터 pa는 변수 a를 가리킴
	
	printf("변수 a의 값 : %d\n", *pa);  // 포인터 간접 참조 >> a 출력
	pa = &b;  // 포인터가 변수 b를 가리킴
	printf("변수 b의 값 : %d\n", *pa);  // 포인터 간접 참조 >> b 출력
	pa = &a;  // 포인터가 다시 변수 a를 가리킴
	a = 20;  // a를 직접 참조해 값을 바꿈
	printf("변수 a의 값 : %d\n", *pa);  // 포인터로 간접 참조 >> 바뀐 값 출력

	return 0;
}