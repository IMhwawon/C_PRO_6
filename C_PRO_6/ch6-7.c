//예제 6-7. 지역 변수로서의 매개변수
#include <stdio.h>

void double_it(int num)
{
	num *= 2;
}

int double_this(int num)
{
	return num *= 2;
}

int main()
{
	int x = 10;
	double_it(x);
	printf("double_it 호출 후 x = %d\n", x);

	x = double_this(x);
	printf("double_this 호출 후 x = %d\n", x);
}