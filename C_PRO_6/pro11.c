//���α׷��� ���� 11. �Ҽ����� �˻��ϴ� �Լ�
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int check_primeNum(num)
{
	int i, j, okay = 1;
	for (j = 2; j < num; j++)
	{
		if (num % j == 0)
		{
			okay = 0;
			break;
		}
	}
	if (okay == 0)
		return 0;
	else
		return num;
}

int main()
{
	int num;
	printf("1~N ������ �Ҽ��� ���մϴ�. N��? ");
	scanf("%d", &num);
	for (int i = 1; i <= num; i++)
		if (check_primeNum(i) >= 2)
			printf("%d ", check_primeNum(i));
}
