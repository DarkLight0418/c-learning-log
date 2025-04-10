#include <stdio.h>

int main(void)
{
	printf("%d\n", 13);			// 10진수 정수 상수 출력
	printf("%d\n", 015);		// 8진수 정수 상수 출력
	printf("%d\n", 0xd);		// 16진수 정수 상수 출력
	printf("%o\n", 13);		// 10진수 13을 8진수로 출력
	printf("%x\n", 13);		// 10진수 13을 16진수 소문자로 출력
	printf("%X\n", 13);		// 10진수 13을 16진수 대문자로 출력

	return 0;
}