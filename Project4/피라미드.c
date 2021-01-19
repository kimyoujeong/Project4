//피라미드 모양으로 별 쌓기
#include<stdio.h>

int main(void)
{
	int floor;
	printf("몇 층으로 쌓겠는가?");
	scanf_s("%d", &floor);
	for (int i = 0; i < floor; i++);
	{
		for (int j = i; j < floor - 1; j++);
		{
			printf("S")
		}
		for (int k = 0; k < i * 2 + 1; k++);
		{
			printf("*");
		}
		printf("\n");
	}
}