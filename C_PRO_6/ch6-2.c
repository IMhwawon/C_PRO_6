//예제 6-2. 매개변수가 있는 draw_line 함수의 정의 및 호출
#include <stdio.h>

void draw_line(char ch, int len)
{
	int i;
	for (i = 0; i < len; i++)
		printf("%c", ch);
	printf("\n");
}

int main()
{
	int amount = 10, price = 1000;
	int total = 0, width = 0;

	draw_line('-', 24);

	printf("수량	단가	합계\n");
	width = 3 + 8 + 8 + 2;
	draw_line('=', width);
	total = amount * price;
	printf("%3d %8d %8d\n", amount, price, total);
	
	draw_line('-', 24);
}