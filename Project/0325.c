#include <stdio.h>
int main()
{
	/*int a, b;
	printf("100������ ���� �ΰ��� �Է��Ͻÿ� : ");
	scanf_s("%d %d", &a, &b);

	(a < b) ? printf("a=%d\n", a) : printf("b=%d\n", b);

	printf("---------------\n");
	if (a > b)
		printf("%d\n", b);
	else if (a < b)
		printf("%d\n", a);
	else
		printf("ǥ���� �� �����ϴ�.");*/

	/*int a;
	printf("�ڿ����� �Է��Ͻÿ� : ");
	scanf_s("%d", &a);
	
	if (a % 2 == 0)
	{
		if (a < 100 && a>0)
			printf("Yes");
	}
		else
			printf("No");*/

	/*int a;
	printf("�ڿ����� �Է��Ͻÿ� : ");
	scanf_s("%d", &a);
	
	if (a > 0 && a < 100)
	{
		if (a % 2 == 0)
			printf("even");
		else
			printf("odd");
	}
	else if (a == 0)
		printf("zero");
	else
		("��� ������ �ƴմϴ�.");*/

	/*int a;
	printf("Ű�� �Է��Ͻÿ� : ");
	scanf_s("%d", &a);
	
	if (a >= 120 && a <= 150)
		printf("yes");
	else
		printf("no");*/
	
	/*int a, b, c;
	printf("�ڿ��� 3���� �Է��Ͻÿ� : ");
	scanf_s("%d %d %d", &a, &b, &c);

	if (a < b && a < c)
		printf("%d", a);
	else if (b < a && b < c)
		printf("%d", b);
	else
		printf("%d", c);*/

	/*int a, b, c;
	printf("�� ���� ���̸� �����ÿ� : ");
	scanf_s("%d %d %d", &a, &b, &c);
	
	if (a < b + c && b < a + c && c < a + b)
		printf("Yes");
	else
		printf("No");*/

	/*int jumsu;
	char grade;

	printf("���� �Է� : ");
	scanf_s("%d", &jumsu);

	if (jumsu >= 0 && jumsu < 100)
	{
		if (jumsu >= 90)
			grade = 'A';
	else if (jumsu >= 80)
			grade = 'B';
	else if (jumsu >= 70)
			grade = 'C';
	else if (jumsu >= 60)
			grade = 'D';
	else 
			grade = 'F';

		printf("�Է��� ���� : %d\n������� : %c���", jumsu, grade);
	}

	else
		printf("��� ������ �ƴմϴ�.");*/

	char blood;
	printf("A�� : A �Ǵ� a\n");
	printf("B�� : B �Ǵ� b\n");
	printf("AB�� : C �Ǵ� c\n");
	printf("O�� : O �Ǵ� o\n\n");
	printf("�������� �ش��ϴ� ���ĺ� �Է� : ");
	scanf_s("%c", &blood, sizeof(blood));

	printf("\n----------���---------\n\n");

	if (blood == 'A' || blood == 'a')
		printf("�ε巴�� ������ ����");
	else if (blood == 'B' || blood == 'b')
		printf("���� ��ȭ�� �ΰ��� ����");
	else if (blood == 'C' || blood == 'c')
		printf("�������� ������ ���� ����");
	else if (blood == 'O' || blood == 'o')
		printf("Ȱ���ϰ� ��Ȱ�� ����");
	else
		printf("������� �ʴ� �����Դϴ�.");

	return 0;


}