//예제 6-3. 리턴값과 매개변수가 있는 get_factorial 함수의 정의 및 호출
#include <stdio.h>

int get_factorial(int num)
{
	int i;
	int result = 1;
	
	for (i = 1; i <= num; i++)
		result *= i;
	return result;
}

int main()
{
	int i;
	int fact;

	for (i = 0; i <= 5; i++)
	{
		fact = get_factorial(i);
		printf("%2d!= %3d\n", i, fact);
	}
	get_factorial(20);
}