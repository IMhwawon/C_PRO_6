//���� 6-7. ���� �����μ��� �Ű�����
#include <stdio.h>

void double_it(int num)
{
	num *= 2;
}

int double_this(int num)
{
	return num *= 2;
}

int main()
{
	int x = 10;
	double_it(x);
	printf("double_it ȣ�� �� x = %d\n", x);

	x = double_this(x);
	printf("double_this ȣ�� �� x = %d\n", x);
}