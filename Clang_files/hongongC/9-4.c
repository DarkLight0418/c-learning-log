#include <stdio.h>

int main(void)
{
  int a = 10, b = 20;
  const int *pa = &a; // 포인터 pa는 변수 a를 가리킴

  printf("변수 a 값 : %d\n", *pa);
  pa = &b; // 포인터 pa 자체는 상수가 아니므로 가리키는 대상 변경 가능
  printf("변수 b 값 : %d\n", *pa);
  pa = &a;
  a = 20;
  printf("변수 a 값 : %d\n", *pa);

  return 0;
}