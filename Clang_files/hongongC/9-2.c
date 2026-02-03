#include <stdio.h>

int main(void)
{
  int a;
  int *pa;

  pa = &a;  // a의 주소값
  *pa = 10; // 포인터를 통해서 변수 a에 10을 대입 -> a = 10;

  printf("포인터로 a 값을 출력하면, : %d\n", *pa);
  printf("변수명으로 a 값을 출력하면, : %d\n", a);

  return 0;
}