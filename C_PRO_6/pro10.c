//���α׷��� ���� 10. ������ ����� ����� ������ ���� ����ϴ� �Լ�
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void print_divisor(int num)
{
	int i, count = 0;
	for (i = 1; i <= num; i++)
	{
		if (num % i == 0)
		{
			count++;
			printf("%d ", i);
		}
	}
	printf(" => �� %d��\n", count);
}

int main()
{
	while (1)
	{
		int num;
		printf("���� ����? ");
		scanf("%d", &num);
		if (num == 0)
			break;
		printf("%d�� ���: ", num);
		print_divisor(num);
	}
}
