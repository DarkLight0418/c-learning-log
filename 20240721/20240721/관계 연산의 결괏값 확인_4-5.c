#include <stdio.h>

int main(void)
{
	int a = 10, b = 20, c = 30;
	int res;  // °á±£°ªÀ» ÀúÀåÇÒ º¯¼ö

	res = (a > b);  // 10 > 20Àº °ÅÁþÀÌ¹Ç·Î °á±£°ªÀº 0
	printf("a > b : %d\n", res);
	res = (a >= b);  // 10 >= 20Àº °ÅÁþÀÌ¹Ç·Î °á±£°ªÀº 0
	printf("a >= b : %d\n", res);
	res = (a < b);  // 10 < 20Àº ÂüÀÌ¹Ç·Î °á±£°ªÀº 1
	printf("a < b : %d\n", res);
	res = (a <= b);  // 10 < 20Àº ÂüÀÌ¹Ç·Î °á±£°ªÀº 1
	printf("a <= b : %d\n", res);
	res = (a <= c);  // 10 <= 20Àº ÂüÀÌ¹Ç·Î °á±£°ªÀº 1
	printf("a <= c : %d\n", res);
	res = (a == b);  // 10 == 20Àº °ÅÁþÀÌ¹Ç·Î °á±£°ªÀº 0
	printf("a == b : %d\n", res);
	res = (a != c);  // 10 != 20Àº °ÅÁþÀÌ¹Ç·Î °á±£°ªÀº 0
	printf("a != c : %d\n", res);

	return 0;
}