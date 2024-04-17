#include <stdio.h>
#include <stdlib.h>
int main()
{
	while (1) {
		int x = rand() % 100;
		int y = rand() % 100;
		int a = x, b = y, z;
		printf("%d + %d = ", a, b);
		scanf_s("%d", &z);
		if (z==a+b)
		{
			printf("축하합니다 정답이에요\n");
			break;
		}
		else
			printf("틀렸습니다\n\n");
	}
}