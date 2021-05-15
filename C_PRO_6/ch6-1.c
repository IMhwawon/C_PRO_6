//예제 6-1. 리턴값과 매개변수가 없는 hi, bye 함수의 정의 및 호출
#include <stdio.h>

void hi(void)
{
	printf("hi let's enjoy c programming.\n");
}

void bye()
{
	printf("bye!\n");
}

int main()
{
	hi();
	bye();

	hi();
	bye();
}