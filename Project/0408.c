#include <stdio.h>
int main()
{
	/*int su,dari,i;
	printf("토끼와 닭의 총 마리 수, 다리 수 입력 : ");
	scanf_s("%d %d", &su, &dari);
	
	for (i = 1; i < su; i++) {
		if ((4 * i) + (2 * (su - i)) == dari)
			printf("토끼 : %d마리, 닭 : %d마리", i, su - i);
	}*/


	/*int su,i, j;
	printf("10이하의 정수를 입력하시오 : ");
	scanf_s("%d", &su);
	for (i = 1; i <= su; i++)
	{
		for (j = 1; j <= su; j++)
		{
			printf("* ");
		}
		printf("\n");
	}*/


	/*int su, i, j;
	printf("10이하의 정수를 입력하시오 : ");
	scanf_s("%d", &su);
	for (i = 0; i < su; i++)
	{
		for (j = 1; j <= su-i; j++)
		{
			printf("@");
		}
		printf("\n");
	}*/


	/*int su, i, j,k;
	printf("10이하의 정수를 입력하시오 : ");
	scanf_s("%d", &su);
	for (i = 1; i <= su; i++)
	{
		for (k = 1; k <= su - i; k++)
		{
			printf(" ");
		}
		for (j = 1; j <= i; j++)
		{
			printf("@");
		}
		printf("\n");
	}*/


	/*int su, i, j,k;
	printf("정수를 입력하시오 : ");
	scanf_s("%d", &su);
	for (i = 1; i < su; i++)
	{
		j = i, k = su - i;
		if ((j > 0 && j < 7)&&(k > 0 && k < 7))
		{
			printf("%d %d", j, k);
			printf("\n");
		}
	}*/



	return 0;
}