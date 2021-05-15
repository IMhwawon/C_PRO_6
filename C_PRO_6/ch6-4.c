//예제 6-4. 리턴값과 매개변수가 있는 get_area 함수의 정의 및 호출
#include <stdio.h>

double get_area(double radius)
{
	const double pi = 3.14;
	return pi * radius * radius;
}

int main()
{
	int r;
	for (r = 1; r <= 5; r++)
		printf("r=%d, 원의 면적= %.2f\n", r, get_area(r));
}