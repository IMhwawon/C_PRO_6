//���α׷��� ���� 6. rgb �������κ��� red �� ���ϴ� �Լ�, green �� ���ϴ� �Լ�, blue �� ���ϴ� �Լ�
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int calculate_red(int rgb)
{
	int red = rgb / (16*16*16*16); 
	//ex. 152478(10)���� 15�� 152478/10^4�� ����. 
	//���� ff0080(16)���� ff�� ff0080/16^4
	return red;
}
int calculate_green(int rgb)
{
	int green =  (rgb/(16*16)) % (16*16);
	//ex. 152478(10)���� 24�� (152478 / 10^2) % 10^2�� ����.
	//���� ff0080(16)���� 00�� (ff0080/16^2) % 16^2
	return green;
}
int calculate_blue(int rgb)
{
	int blue = rgb % (16*16*16*16);
	//ex. 152478(10)���� 78�� 152478%10^4�� ����.
	//���� ff0080(16)���� 80�� ff0080%16^4
	return blue;
}

int main()
{
	int rgb, red, green=0, blue;
	printf("RGB ����? ");
	scanf("%x", &rgb);
	
	red = calculate_red(rgb);
	green = calculate_green(rgb);
	blue = calculate_blue(rgb);

	printf("RGB %X�� red: %d, green: %d, blue: %d\n", rgb, red, green, blue);
}