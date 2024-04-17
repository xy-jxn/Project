#include <stdio.h>
int main()
{
	// 별찍기 네모
	/*int i, j;
	for (j = 0; j < 5; j++)
	{
		for (i = 0; i < 10; i++)
			printf("*");

		printf("\n");
	}*/


	//한줄로 별찍기
	/*int i, j;
	for (j = 1; j <= 4; j++)
	{
		for (i = 10; i >= 1; i--)
		{
			printf("\b");
		}
		
		printf("*\n");
	}*/


	//직각 삼각형 별찍기
	/*int i, j, n;
	printf("숫자 입력 : ");
	scanf_s("%d", &n);

	for (i = 0; i < n; i++)
	{
		for (j = 0; j <i; j++)
			printf("*");

		printf("\n");
	}*/


	//직각 역삼각형 별찍기
	/*int i, j, n;
	printf("숫자 입력 : ");
	scanf_s("%d", &n);

	for (i = n; i >=1; i--)
	{
		for (j = 1; j <= i; j++)
			printf("*");

		printf("\n");
	}*/


	//별찍기 삼각형1
	/*int i, j;
	for (j = 1; j <= 9; j++)
	{
		for (i = 9; i >= j; i--)
			printf(" ");

		for (i = 1; i <= j; i++)
			printf("* ");

		printf("\n");
	}*/
	


	/*int i, j;
	for (j = 1; j <= 9; j++)
	{
		for (i = 9; i >= j; i--)
			printf(" ");

		for (i = 1; i <= j; i++)
			printf("*");
		
		for (i = 1; i < j; i++)
			printf("*");
		printf("\n");
	}*/


	int i, j;
	
	for (j = 9; j >=1; j--)
	{
		for (i = 9; i >= j; i--)
			printf(" ");

		for (i = 1; i <= j; i++)
			printf("*");
		printf("\n");

		/*if (i == 0 && j == 1)
			printf("\n");
		else
			for (i = 1; i < j; i++)
				printf("*");
		printf("\n");*/
		
	}

	
	return 0;
}