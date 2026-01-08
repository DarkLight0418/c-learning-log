#include <stdio.h>

int main()
{
  char animal[5][20];
  int i;
  int count;

  count = sizeof(animal) / sizeof(animal[0]); // 행의 수 계산
  for (i = 0; i < count; i++)
  {
    scanf("%s", animal[i]);
  }

  for (i = 0; i < count; i++)
  {
    printf("%s", animal[i]);
  }

  return 0;
}