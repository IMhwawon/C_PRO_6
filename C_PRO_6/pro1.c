//���α׷��� ���� 1. ������ ����� ����ϴ� �Լ�

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void print_multiple(int num, int count)
{
	int i;
	for (i = 1; i <= count; i++)
		printf("%d ", num * i);
	printf("\n");
}

int main()
{
	while (1)
	{
		int input;
		printf("����? ");
		scanf("%d", &input);
		if (input == 0)
		{
			break;
		}
		print_multiple(input, 20);
	}
}