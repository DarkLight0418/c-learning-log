#include <stdio.h>

struct score
	{
	int scoreKOR;
	int scoreMAT;
	};
	
int main() {
	struct score a;
	struct score b[10];
	
	a.scoreKOR = 100;
	a.scoreMAT = 100;
	
	b[0].scoreKOR = 94;
	b[0].scoreMAT = 86;
	b[1].scoreKOR = 100;
	b[1].scoreMAT = 99;
	
	printf("b[0] 국어점수: %d", b[0].scoreKOR);
	
	return 0;
}
	