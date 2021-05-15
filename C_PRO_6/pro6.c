//프로그래밍 과제 6. rgb 색상으로부터 red 값 구하는 함수, green 값 구하는 함수, blue 값 구하는 함수
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int calculate_red(int rgb)
{
	int red = rgb / (16*16*16*16); 
	//ex. 152478(10)에서 15은 152478/10^4로 구함. 
	//따라서 ff0080(16)에서 ff는 ff0080/16^4
	return red;
}
int calculate_green(int rgb)
{
	int green =  (rgb/(16*16)) % (16*16);
	//ex. 152478(10)에서 24는 (152478 / 10^2) % 10^2로 구함.
	//따라서 ff0080(16)에서 00은 (ff0080/16^2) % 16^2
	return green;
}
int calculate_blue(int rgb)
{
	int blue = rgb % (16*16*16*16);
	//ex. 152478(10)에서 78은 152478%10^4로 구함.
	//따라서 ff0080(16)에서 80은 ff0080%16^4
	return blue;
}

int main()
{
	int rgb, red, green=0, blue;
	printf("RGB 색상? ");
	scanf("%x", &rgb);
	
	red = calculate_red(rgb);
	green = calculate_green(rgb);
	blue = calculate_blue(rgb);

	printf("RGB %X의 red: %d, green: %d, blue: %d\n", rgb, red, green, blue);
}