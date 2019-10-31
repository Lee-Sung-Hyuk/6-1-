#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main()
{
	int a;
	printf("0에서 360도 사이의 값을 입력하시오: ");
	scanf("%d", &a);

	if (a == 0)
	{
		printf("양의 x축");
	}

	else if (a > 0 && a < 90)
	{
		printf("제 1사분면");
	}

	else if (a == 90)
	{
		printf("양의 y축");
	}

	else if (a > 90 && a < 180)
	{
		printf("제 2사분면");
	}

	else if (a == 180)
	{
		printf("음의 x축");
	}

	else if (a > 180 && a < 270)
	{
		printf("제 3사분면");
	}

	else if (a == 270)
	{
		printf("음의 y축");
	}

	else if (a > 270 && a < 360)
	{
		printf("제 4사분면");
	}

	else if (a < 0 || a > 360)
	{
		printf("잘못된 각도입니다.");
	}
	
}