//예제 6-5. 3개의 정수 중 가장 큰 값을 구하는 get_max 함수의 정의 및 호출
#include <stdio.h>
int get_max(int x, int y, int z)
{
	int max = x > y ? x : y;
	max = z > max ? z : max;
	return max;
}

int main()
{
	double max;
	max = get_max(12.34, 0.5, 7.9);
	printf("max = %f\n", max);
}