//예제 6-8. 전역 변수의 선언 및 사용
#include <stdio.h>

void print_count(void);
void increment(void);
void decrement(void);

int count;

int main()
{
	int i;
	count = 0;
	print_count();

	for (i = 0; i < 5; i++)
		increment();
	print_count();

	for (i = 0; i < 5; i++)
		decrement();
	print_count();
}

void print_count()
{
	printf("count = %d\n", count);
}

void increment()
{
	count++;
}

void decrement()
{
	count--;
}