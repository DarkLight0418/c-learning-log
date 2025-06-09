#include <stdio.h>

int main(void)
{
	int income = 0;		// 소득액 초기화
	double tax;			// 세금 변수
	const double tax_rate = 0.12;  // const - 이후 값 변경 불가능

	income = 456000;		// 소득액 저장
	tax = income * tax_rate;
	printf("세금은 : %.1lf입니다.\n", tax);

	return 0;
}