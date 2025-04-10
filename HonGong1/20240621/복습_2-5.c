#include <stdio.h>

int main(void)
{
	printf("%d\n", 12);		// 10진수 정수 상수 출력
	printf("%d\n", 014);	// 8진수 정수 상수 출력
	printf("%d\n", 0xc);	// 16진수 정수 상수 출력
	printf("Be happy!\n");		// 출력 후 줄 바꿈(\n)
	printf("Bn\be \thappy!\n");		// 글자 바꾸기(\b), 탭하는 거(\t)
	printf("%d와 %d의 합은 %d입니다.\n", 15, 20, 15 + 20);
	return 0;
}