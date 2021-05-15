//프로그래밍 과제 10. 정수의 약수와 약수의 개수를 구해 출력하는 함수
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void print_divisor(int num)
{
	int i, count = 0;
	for (i = 1; i <= num; i++)
	{
		if (num % i == 0)
		{
			count++;
			printf("%d ", i);
		}
	}
	printf(" => 총 %d개\n", count);
}

int main()
{
	while (1)
	{
		int num;
		printf("양의 정수? ");
		scanf("%d", &num);
		if (num == 0)
			break;
		printf("%d의 약수: ", num);
		print_divisor(num);
	}
}
