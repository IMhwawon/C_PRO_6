//���� 6-4. ���ϰ��� �Ű������� �ִ� get_area �Լ��� ���� �� ȣ��
#include <stdio.h>

double get_area(double radius)
{
	const double pi = 3.14;
	return pi * radius * radius;
}

int main()
{
	int r;
	for (r = 1; r <= 5; r++)
		printf("r=%d, ���� ����= %.2f\n", r, get_area(r));
}