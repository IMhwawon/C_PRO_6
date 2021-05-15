//프로그래밍 과제 5. 메뉴를 출력하는 함수 (리턴값과 매개변수가 없다고 명시)
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void print_menu1()
{
	printf("파일 열기를 수행합니다.\n");
}
void print_menu2()
{
	printf("파일 저장을 수행합니다.\n");
}
void print_menu3()
{
	printf("인쇄를 수행합니다.\n");
}
void print_menu0()
{
	return 0;
}

int main()
{
	while (1)
	{
		int menu;
		printf("[1. 파일 열기  2. 파일 저장  3. 인쇄  0. 종료] 선택? ");
		scanf("%d", &menu);

		if (menu == 1)
		{
			print_menu1();
		}
		else if (menu == 2)
		{
			print_menu2();
		}
		else if (menu == 3)
		{
			print_menu3();
		}
		else if (menu == 0)
		{
			print_menu0();
			break;
		}
		else
		{
			printf("목록에 없는 번호입니다.\n");
		}
	}
}