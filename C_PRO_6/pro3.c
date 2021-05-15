//프로그래밍 과제 3. 두 점 사이의 직선 거리를 구하는 함수
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

float calculate_distance(int s_x, int s_y, int e_x, int e_y)
{
	//밑변^2 + 높이^2 = 거리^2
	int width = e_x - s_x;
	int height = e_y - s_y;
	float distance = sqrt((width * width + height * height),2);
	return distance;
}

int main()
{
	int s_x, s_y, e_x, e_y;
	printf("직선의 시작점 좌표? ");
	scanf("%d %d", &s_x, &s_y);
	printf("직선의 끝점 좌표? ");
	scanf("%d %d", &e_x, &e_y);
	printf("(%d, %d)~(%d, %d) 직선의 길이: %f\n",s_x, s_y, e_x, e_y, calculate_distance(s_x, s_y, e_x, e_y));
}