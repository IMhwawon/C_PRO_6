//���α׷��� ���� 5. �޴��� ����ϴ� �Լ� (���ϰ��� �Ű������� ���ٰ� ���)
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void print_menu1()
{
	printf("���� ���⸦ �����մϴ�.\n");
}
void print_menu2()
{
	printf("���� ������ �����մϴ�.\n");
}
void print_menu3()
{
	printf("�μ⸦ �����մϴ�.\n");
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
		printf("[1. ���� ����  2. ���� ����  3. �μ�  0. ����] ����? ");
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
			printf("��Ͽ� ���� ��ȣ�Դϴ�.\n");
		}
	}
}