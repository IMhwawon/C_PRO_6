//���� 6-5. 3���� ���� �� ���� ū ���� ���ϴ� get_max �Լ��� ���� �� ȣ��
#include <stdio.h>
int get_max(int x, int y, int z)
{
	int max = x > y ? x : y;
	max = z > max ? z : max;
	return max;
}

int main()
{
	double max;
	max = get_max(12.34, 0.5, 7.9);
	printf("max = %f\n", max);
}