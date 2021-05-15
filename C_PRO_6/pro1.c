//프로그래밍 과제 1. 정수의 배수를 출력하는 함수

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void print_multiple(int num, int count)
{
	int i;
	for (i = 1; i <= count; i++)
		printf("%d ", num * i);
	printf("\n");
}

int main()
{
	while (1)
	{
		int input;
		printf("정수? ");
		scanf("%d", &input);
		if (input == 0)
		{
			break;
		}
		print_multiple(input, 20);
	}
}