#define	_CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	char grade[5];  // 학점 입력할 변수
	char name[20];  // 이름 입력할 배열

	printf("학점 입력 : ");
	scanf("%s", grade);  // grade 변수에 학점 문자 입력
	printf("이름 입력 : ");
	scanf("%s", name);    // name 배열에 이름 문자열 입력, & 사용 안함.
	printf("%s의 학점은 %s입니다. \n", name, grade);

	return 0;
}