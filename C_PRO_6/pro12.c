//���α׷��� ���� 12. ���������� ����ϴ� �Լ�
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int total = 0;
int calculate_result(char ch, int num)
{
	int result;
	if (ch == '+')
		result = total + num;
	else if (ch == '-')
		result = total - num;
	else if (ch == '*')
		result = total * num;
	else if (ch == '/')
		result = total / num;
	else
		printf("��Ģ������ �ƴմϴ�.\n");
}

int main()
{
	printf("%d ", total);
	while (1)
	{
		char ch; int num;
		scanf("%c", &ch);
		scanf(" %d", &num);
		rewind(stdin); //���Ͱ� ó��

		if (ch == '0' && num == 0)
		{
			break;
		}
		printf("= %d ", calculate_result(ch, num));
		total = calculate_result(ch, num);
	}
}