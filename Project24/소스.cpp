#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main()
{
	int a;
	printf("0���� 360�� ������ ���� �Է��Ͻÿ�: ");
	scanf("%d", &a);

	if (a == 0)
	{
		printf("���� x��");
	}

	else if (a > 0 && a < 90)
	{
		printf("�� 1��и�");
	}

	else if (a == 90)
	{
		printf("���� y��");
	}

	else if (a > 90 && a < 180)
	{
		printf("�� 2��и�");
	}

	else if (a == 180)
	{
		printf("���� x��");
	}

	else if (a > 180 && a < 270)
	{
		printf("�� 3��и�");
	}

	else if (a == 270)
	{
		printf("���� y��");
	}

	else if (a > 270 && a < 360)
	{
		printf("�� 4��и�");
	}

	else if (a < 0 || a > 360)
	{
		printf("�߸��� �����Դϴ�.");
	}
	
}