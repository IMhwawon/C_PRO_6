//프로그래밍 과제 12. 연속적으로 계산하는 함수
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int total = 0;
int calculate_result(char ch, int num)
{
	int result;
	if (ch == '+')
		result = total + num;
	else if (ch == '-')
		result = total - num;
	else if (ch == '*')
		result = total * num;
	else if (ch == '/')
		result = total / num;
	else
		printf("사칙연산이 아닙니다.\n");
}

int main()
{
	printf("%d ", total);
	while (1)
	{
		char ch; int num;
		scanf("%c", &ch);
		scanf(" %d", &num);
		rewind(stdin); //엔터값 처리

		if (ch == '0' && num == 0)
		{
			break;
		}
		printf("= %d ", calculate_result(ch, num));
		total = calculate_result(ch, num);
	}
}