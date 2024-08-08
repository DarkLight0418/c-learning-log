#include <stdio.h>

int main(void)
{
	int rank = 2, m = 0;

	switch (rank)  // rank 값 확인
	{
	case 1:  // 1일시
		m = 300;
		break;  // 위에거 수행하고 블록을 벗어나 22행으로 이동
	case 2:
		m = 200;
		break;
	case 3:
		m = 100;
		break;
	default:
		m = 10;
		break;
	}

	printf("m : %d\n", m);

	return 0;
}