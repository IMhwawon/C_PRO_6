//프로그래밍 과제 4. 할인 가격을 구하는 함수
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int calculate_discount(int price, int per)
{
	int result;
	result = price - (price * per / 100); 
	return result;
}

int main()
{
	int price, per;
		printf("할인율(%%)? ");
		scanf("%d", &per);
	while (1)
	{
		printf("제품의 가격? ");
		scanf("%d", &price);
		if (price == 0)
		{
			break;
		}
		printf("할인가: %d원\n", calculate_discount(price, per));
	}
}