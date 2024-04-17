#include  <stdio.h>
int main()
{
	int i,j, input;
	printf("정수 입력 : ");
	scanf_s("%d", &input);

	for (i = 2; i <= input; i++)
	{
		for (j = 2; j < i; j++)
		{ 
			//배수가 나오면 for j가 탈출함
			if (i % j == 0)
			{
				break;
			}
		}
			if (i == j)
			{
				printf("%3d", i);
			}
	}
		return 0;
}