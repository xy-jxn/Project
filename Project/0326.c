#include <stdio.h>
int main()
{
	//�ݼ��� 10�� ����ϱ� < while >
	/*int i = 0;
	while (i =< 10)
		{
			printf("�����ð��� ������ �ʰڽ��ϴ�.\n");
			i +=1;
		}
	return 0;*/

	//������ ����ϱ� < while >
	/*int num1, num2 = 1;
	printf("����ϰ� ���� �� : ");
	scanf_s("%d", &num1);
	while (num2 <= 9)
	{
		printf("%d*%d=%d\n", num1, num2, num1 * num2);
		num2 += 1;
	}*/

	//�ִ����� ���ϱ�
	/*int x, y, r;
	printf("�� ���� ������ �Է��Ͻÿ� : ");
	scanf_s("%d %d", &x, &y);

	while (y != 0)
	{
		r = x % y;
		x = y;
		y = r;
	}
	printf("�ִ� ������� %d�Դϴ�.",x);*/

	// �Է� ���ڰ� 0�̸� ��� ���߱� < do-while >
	/*int answer;
	do
	{
		printf("�Է��Ͻÿ� : ");
		scanf_s("%d", &answer);
		printf("%d�Է�\n", answer);
	} while (answer != 0);*/

	//���� ���߱� < do-while >
	/*int answer = 41;
	int guess;
	int tries = 0;

	do {
		printf("���ڸ� �Է��Ͻÿ� : ");
		scanf_s("%d", &guess);
		tries += 1;
		if (guess > answer)
			printf("������ ������ ���亸�� �����ϴ�\n\n");
		if (guess < answer)
			printf("������ ������ ���亸�� �����ϴ�\n\n");
	} while (guess != answer);

	printf("�����մϴ�.�õ�Ƚ�� = %d\n", tries);*/

	// ������ ����ϱ� < do-while >
	/*int i = 1;
	int num;

	printf("����� �� ���� �����ÿ� : ");
	scanf_s("%d", &num);

	do
	{
		printf("%d * %d = %d\n", i, num, i * num);
		i++;
	} while (i <= 9);*/

	//���� �հ� ���ϱ� < do-while >
	/*int a, b = 1, sum = 0;
	printf("���� �Է� : ");
	scanf_s("%d", &a);

	do
	{
		sum += b;
		printf("%dȸ ���� : �����հ�� %d\n", b, sum);
		b++;
	} while (a >= b);

	printf("1���� %d���� �հ� = %d\n", a, sum);*/

	return 0;

}