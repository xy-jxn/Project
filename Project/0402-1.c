//�Լ� 1-1�� ����
/*
#include <stdio.h>
void ADD(int x, int y);
int main(void)
{
	int a = 10, b = 20;
	ADD(a, b);
	a = 5, b = 10;
	ADD(a, b);
	return 0;
}
void ADD(int x, int y)
{
	printf("%d + %d = %d\n", x, y, x + y);
}
*/


// �Լ� 1-2�� ����
/*
#include <stdio.h>
int ADD(int x, int y);
int main(void)
{
	int a = 10, b = 20;
	ADD(a, b);
	printf("%d + %d = %d\n", a, b, ADD(a, b));
	a = 5, b = 10;
	ADD(a, b);
	printf("%d + %d = %d\n", a, b, ADD(a, b));
	return 0;
}
int ADD(int x, int y)
{
	return x + y;
}
*/


// �Լ� 3�� ���� - ��ġ�� ���ϱ�
/*
#include <stdio.h>
void Exchange(float x);
int main()
{
	float input;
	printf("��ġ �Է� : ");
	scanf_s("%f", &input);
	Exchange(input);
	return 0;
}
void Exchange(float x)
{
	printf("%.2f ��Ƽ����", x * 2.54);
}
*/


// �Լ� 4�� ���� - �Է��� ���ĺ� ����ϱ�
/*#include <stdio.h>
char alpha();
int main(void)
{
	char show;
	printf("<< 1 . ����� ���� �Լ����� �Է��� ���ĺ� ���� >>\n\n");
	show = alpha();

	printf("<< 3 . main �Լ� ���� >>\n");
	printf("���޹��� ���ĺ� : %c\n", show);
	printf("�ƽ�Ű �ڵ� �� : %d\n", show);
	return 0;
}
char alpha()
	{
	char x;
	printf("<< 2 . ����� ���� �Լ� ���� >>\n");
	printf("���ĺ� �Է� : ");
		scanf_s("%c",&x);
		return x;
	}
	*/


// �Լ� 5�� ���� - 2�� 10�� ���ϱ�
/*#include <stdio.h>
int power(int x,int y);
int main()
{
	int result;
	result = power(2, 10);
	printf("��� = %d\n", result);
	return 0;
}

int power(int x,int y)
{
	int i ,j = 1, result;
	for (i = 1; i <= y; i++)
	{
		j*=x;
	}
	resurt = j;
	return result;
}
*/


// �Լ� 6�� ���� - 1���� input���� �հ� ���ϱ�
/*#include <stdio.h>
int sum(int result);

int main()
{
	int input, result = 0;
	printf("���� �Է� : ");
	scanf_s("%d", &input);
	result = sum(input);
	printf("1���� %d���� �� = %d\n", input, result);
	
	printf("���� �Է� : ");
	scanf_s("%d", &input);
	printf("1���� %d���� �� = %d\n", input, sum(input));

	return 0;
}
int sum(int result)
{
	int i, hap = 0;
	for (i = 1; i <= result; i++)
	{
		hap += i;
	}
	result = hap;
	return result;
}*/


//�Լ� ���� 7�� - �Ҽ� �����ϱ�
/*#include <stdio.h>
int prime_check(int j);
int main()
{
	int input, result;
	printf("2 �̻��� ���� �Է� : ");
	scanf_s("%d", &input);

	if (input == 1)
		printf("�Է� ������ �ƴմϴ�.\n");

	else
	{
		result = prime_check(input);
		if (result == 1)
			printf("�Ҽ��Դϴ�.\n");

		else
			printf("�Ҽ��� �ƴմϴ�.\n");
	}
}
	
	int prime_check(int j)
	{
		int i;
		for (i = 2; i < j; i++)
		{
			if (j % i == 0)
			{
				return 0;
			}
		}
		return 1;
	}*/


// �Լ� 8�� ���� - �Է��� ������ ��� ���ϱ�
/*#include <stdio.h>
int get_divisior(int j);
int main()
{
	int input;
	printf("���� �Է� : ");
	scanf_s("%d", &input);

	printf("%d�� ��� : ", input);
	get_divisior(input);
	return 0;
}
int get_divisior(int j)
{
	int i;
	for (i = 1; i <= j; i++)
	{
		if (j % i == 0)
			printf("%d ", i);
	}
	return j;
}*/


// �Լ� 9�� ���� - �Է��� �� ������ �Ҽ� ���ϱ�
#include <stdio.h>
void prime_print(int x);

int main()
{
	int input;
	printf("���� �Է� : ");
	scanf_s("%d", &input);

	printf("%d���� �Ҽ� ��� : ", input);
	prime_print(input);
	return 0;
}
void prime_print(int x)
{
	int i, j;
	for (i=2; i < x; i++)
	{
		int prime = 1;
		for (j=2; j < i; j++)
		{
			if (i % j == 0)
			{
				prime = 0;
				break;
			}
		}
		if(prime==1)
			printf("%d ", i);
	}
}