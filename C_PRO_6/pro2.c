//프로그래밍 과제 2. 직사각형의 둘레를 구하는 함수
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int calculate_round(int width, int height)
{
	return width * 2 + height * 2;
}
int main()
{
	int width, height;
	printf("가로? ");
	scanf("%d", &width);
	printf("세로? ");
	scanf("%d", &height);
	printf("직사각형의 둘레: %d\n", calculate_round(width, height));
}