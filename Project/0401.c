#include  <stdio.h>
int main()
{
	int i,j, input;
	printf("���� �Է� : ");
	scanf_s("%d", &input);

	for (i = 2; i <= input; i++)
	{
		for (j = 2; j < i; j++)
		{ 
			//����� ������ for j�� Ż����
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