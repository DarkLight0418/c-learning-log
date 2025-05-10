#include <stdio.h>

struct student {  // 구조체 선언
	int num;
	double grade;
};

int main(void) {
	struct student s1;  // struct student형의 구조체 선언
	
	s1.num = 2;
	s1.grade = 4.2;
	
	printf("학번 : %d\n", s1.num);
	printf("학점 : %.1lf \n", s1.grade);
	
	return 0;
}