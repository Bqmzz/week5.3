#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
void triangle(int b, int h)
{
	int x, y;
	if (b > 0 && h > 0)
	{
		float tagarea = 0.5 * b * h;
		printf("Triangle area is %.2f\n", tagarea);
		if (b == h)
		{
			printf("\nIs equilateral triangle");
		}
		else
		{
			printf("\nIsn't equilateral triangle");
		}
	}
	else
	{
		printf("error");
	}
}
int main()
{
	int i[2];
	int* base, * hight, b, h;
	base = &b;
	hight = &h;
	char tag[2][10] = { "Base","Hight" };
	int j;
	for (j = 0; j < 2; j++)
	{
		printf("%s is ", tag[j]);
		scanf_s("%d", &i[j]);
	}
	triangle(i[0], i[1]);
	return 0;
}