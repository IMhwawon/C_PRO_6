//프로그래밍 과제 11. 소수인지 검사하는 함수
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int check_primeNum(num)
{
	int i, j, okay = 1;
	for (j = 2; j < num; j++)
	{
		if (num % j == 0)
		{
			okay = 0;
			break;
		}
	}
	if (okay == 0)
		return 0;
	else
		return num;
}

int main()
{
	int num;
	printf("1~N 사이의 소수를 구합니다. N은? ");
	scanf("%d", &num);
	for (int i = 1; i <= num; i++)
		if (check_primeNum(i) >= 2)
			printf("%d ", check_primeNum(i));
}
