//���α׷��� ���� 8. ��ȿ�� ��¥���� �˻��ϴ� �Լ�
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int check_date(int year, int month, int day)
{
	int okay = 0;
	if (month <= 12 && day <= 31) //�ּ����� ���� ��¥�� ����
	{
		if (month<=7) //1 2 3 4 5 6 7
		{
			if (month % 2 == 0 && day<=30) //2 4 6
			{
				if (month == 2) //2
				{
					if (year % 4 == 0 && day<=29) //������ ��� 29�Ϻ��� �۰ų� ������ ��
					{
							okay = 1;
					}
					else if(year % 4 !=0 && day <= 28) //������ �ƴ� ��� 28�Ϻ��� �۰ų� ������ ��
					{
							okay = 1;
					}
				}
				else // 4 6
				{
					okay = 1;
				}
			}
			else if (month % 2 != 0) //1 3 5 7
			{
				okay = 1; 
			}
		}
		else //8 9 10 11 12
		{
			if (month % 2 == 0) //8 10 12
			{
				okay = 1;
			}
			else if (month % 2 != 0 && day <= 30) //9 11
			{
				okay = 1;
			}
		}
	}
	return okay;
}

int main()
{
	while (1)
	{
		int year, month, day, okay;
		printf("��¥ (�� �� ��)? ");
		scanf("%d %d %d",&year, &month, &day);
		okay = check_date(year, month, day);
		if (okay == 0)
		{
			printf("�߸� �Է��ϼ̽��ϴ�. ��ȿ�� ��¥�� �Է��ϼ���.\n");
		}
		else
			break;
	}
}