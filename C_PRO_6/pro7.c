//���α׷��� ���� 7. �������� ���ϴ� �Լ�
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int print_leapYear(int year)
{
	if (year % 4 == 0)
		return year;
}

int main()
{
	int year, count=0;
	for (year = 2000; year < 2100; year += 4)
	{
		printf("%d ", print_leapYear(year));
		count++;
		if (count % 10 == 0)
			printf("\n");
	}
}