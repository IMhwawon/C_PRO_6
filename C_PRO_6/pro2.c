//���α׷��� ���� 2. ���簢���� �ѷ��� ���ϴ� �Լ�
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int calculate_round(int width, int height)
{
	return width * 2 + height * 2;
}
int main()
{
	int width, height;
	printf("����? ");
	scanf("%d", &width);
	printf("����? ");
	scanf("%d", &height);
	printf("���簢���� �ѷ�: %d\n", calculate_round(width, height));
}