//���� 6-3. ���ϰ��� �Ű������� �ִ� get_factorial �Լ��� ���� �� ȣ��
#include <stdio.h>

int get_factorial(int num)
{
	int i;
	int result = 1;
	
	for (i = 1; i <= num; i++)
		result *= i;
	return result;
}

int main()
{
	int i;
	int fact;

	for (i = 0; i <= 5; i++)
	{
		fact = get_factorial(i);
		printf("%2d!= %3d\n", i, fact);
	}
	get_factorial(20);
}