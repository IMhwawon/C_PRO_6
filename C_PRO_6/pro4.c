//���α׷��� ���� 4. ���� ������ ���ϴ� �Լ�
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int calculate_discount(int price, int per)
{
	int result;
	result = price - (price * per / 100); 
	return result;
}

int main()
{
	int price, per;
		printf("������(%%)? ");
		scanf("%d", &per);
	while (1)
	{
		printf("��ǰ�� ����? ");
		scanf("%d", &price);
		if (price == 0)
		{
			break;
		}
		printf("���ΰ�: %d��\n", calculate_discount(price, per));
	}
}