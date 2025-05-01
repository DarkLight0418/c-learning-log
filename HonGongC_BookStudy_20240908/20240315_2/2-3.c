#include <stdio.h>

int main(void)
{
	printf("Be happy\n");		// \n (줄 바꿈)
	printf("12345678901234567890\n");
	printf("My\tfriend\n");		// \t (탭 위치로 이동) 후 \n (줄 바꿈)
	printf("Goot\bd\tchance\n");	// \b (한 칸 왼쪽으로 이동) \t (t를 d로 바꾸고 탭 위치로 이동)
	printf("Cow\rW\a\n");	// \r (맨 앞으로 이동) \a (알람(벨소리) 출력)

	return 0;
}