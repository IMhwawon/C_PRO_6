//���α׷��� ���� 3. �� �� ������ ���� �Ÿ��� ���ϴ� �Լ�
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

float calculate_distance(int s_x, int s_y, int e_x, int e_y)
{
	//�غ�^2 + ����^2 = �Ÿ�^2
	int width = e_x - s_x;
	int height = e_y - s_y;
	float distance = sqrt((width * width + height * height),2);
	return distance;
}

int main()
{
	int s_x, s_y, e_x, e_y;
	printf("������ ������ ��ǥ? ");
	scanf("%d %d", &s_x, &s_y);
	printf("������ ���� ��ǥ? ");
	scanf("%d %d", &e_x, &e_y);
	printf("(%d, %d)~(%d, %d) ������ ����: %f\n",s_x, s_y, e_x, e_y, calculate_distance(s_x, s_y, e_x, e_y));
}