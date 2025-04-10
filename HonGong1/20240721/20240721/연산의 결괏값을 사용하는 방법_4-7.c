#include <stdio.h>

int main(void)
{
	int a = 10, b = 20, res;

	a + b;   // ���� ����� ������
	printf("%d + %d = %d\n", a, b, a + b);  /// ���� ����� �ٷ� ��¿� ���

	res = a + b;  // ���� ����� res ������ ����
	printf("%d + %d = %d\n", a, b, res);  // ����� ���� ��� ���

	return 0;
}