#include <stdio.h>
int main()
{
	//�ȳ��ϼ��� 10�� ����ϱ� < for >
	/*int count;

	for (count = 1; count <= 10; count++)
	{
		printf("%dȸ ��� : �ȳ��ϼ���.\n", count);
	}
	printf("for �� ���� �� ī��Ʈ ������ �� : %d\n", count);*/


	//Hello world! 5�� ����ϱ� < for >
	/*for (a = 1; a <= 5; a++)
		printf("Hello world!\n");*/


	//1���� 10���� ���� �� ����ϱ� < for >
	/*int num = 1, sum;

	for (sum = 0; num <= 10; num++)
	{
		sum += num;
	}
	printf("1���� 10���� ���� �� : %d", sum);*/


	//������ ����ϱ� < for >
	/*int a, b;
	printf("���� �Է� : ");
	scanf_s("%d", &a);

	for (b = 1; b <= 9; b++)
		printf("%d * %d = %d\n", a, b, a * b);*/


	//���丮�� ����ϱ�(����)  < for >
	/*int a, b, fact = 1;
	printf("���� �Է� : ");
	scanf_s("%d", &a);

	for (b = 1; a >= b; b++) 
		{
		fact *= b;
		}

	printf("%d!�� %d�Դϴ�.", a, fact );*/


	//���丮�� ����ϱ�(����)  < for >
	/*int a, b, fact = 1;
	printf("���� �Է� : ");
	scanf_s("%d", &a);

	for (b = a; b >= 1; b--)
	{
		fact *= b;
	}

	printf("%d!�� %d�Դϴ�.", a, fact);*/


	// �������� ���ڸ� ��������� 0�� �Ǹ� ���ߴ� ��  < break�� >
	/*int num;
	
	while(1)
	{ 
		printf("���Ͻÿ� : ");
		scanf_s("%d", &num);

		if (num==0)
			break;
		printf("%d�Է�\n", num);
	}*/
	

	//������ ��� ���ϱ� < continue�� >
	/*int i, count = 0, answer;
	printf("������ �Է��Ͻÿ� : ");
	scanf_s("%d", &answer);

	for (i = 1; i <= 100; i++)
	{
		if(i%answer !=0)
		{
			continue;
		}
		count++;
	}
	printf("1���� 100������ �� �߿��� %d�� ����� %d�� �Դϴ�.", answer, count);*/


	//�Ǽ��� ���� ���ϴµ� ������ ������ ���߱� < break�� >
	/*int i;
	double num, sum = 0;
	for (i = 1; i <= 10; i++)
	{
		printf("%d��° �Ǽ��� �Է��Ͻÿ� : ", i);
		scanf_s("%lf", &num);
		if (num < 0.0)
			break;
		sum += num;
	}
	printf("�հ� : %lf", sum);*/


	//¦���� ����ϰ� Ȧ���� �ѱ�� < continue�� >
	/*int num;

	for (num = 1; num <= 10; num++)
	{
		if (num % 2 == 1)
			continue;
		printf("���� : %d\n", num);
	}*/


	return 0;
}