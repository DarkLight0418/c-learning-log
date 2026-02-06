#include <stdio.h>

int main(void)
{
  int a = 10, b = 20;

  // pa는 "const int"를 가리키는 포인터
  // 즉, pa를 통해서는 값 변경 불가
  // 하지만 pa 자체는 상수가 아니므로 다른 주소를 가리킬 수 있음
  const int *pa = &a;

  // a의 값을 읽는 것은 가능
  printf("변수 a 값 : %d\n", *pa);

  // pa가 b를 가리키도록 변경 (가능)
  pa = &b;
  printf("변수 b 값 : %d\n", *pa);

  // 다시 a를 가리킴
  pa = &a;

  // a 자체는 const가 아니므로 직접 변경 가능
  a = 20;

  // pa를 통해 변경된 a의 값을 읽는 것은 가능
  printf("변수 a 값 : %d\n", *pa);

  return 0;
}
