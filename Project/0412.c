// 1��
/*#include <stdio.h>
int main() {
	int a, b;
	printf("������ �Է��Ͻÿ� : ");
	scanf_s("%d", &a);
	printf("������ �Է��Ͻÿ� : ");
	scanf_s("%d", &b);
	if (a % b == 0)
		printf("����Դϴ�.");
	else
		printf("����� �ƴմϴ�.");
	return 0;
}*/


// 2��
/*#include <stdio.h>
int main() {
	int a, b, c;
	printf("���� 3���� �Է��Ͻÿ� : ");
	scanf_s("%d %d %d", &a, &b, &c);
	if (a > b)
		a = b;
	if (a > c)
		a = c;
	printf("���� ���� ������ %d�Դϴ�.", a);
	return 0;
}*/


// 3��
/*#include <stdio.h>
int main() {
	int a, b;
	printf("Ű�� �Է��Ͻÿ� : ");
	scanf_s("%d", &a);
	printf("���̸� �Է��Ͻÿ� : ");
	scanf_s("%d", &b);
	if (a >= 140 && b >= 10)
		printf("Ÿ�� �����ϴ�.");
	else
		printf("�˼��մϴ�.");
	return 0;
}*/


// 4��
/*#include <stdio.h>
int main() {
	int a, b;
	printf("ü�߰� Ű�� �Է��Ͻÿ� : ");
	scanf_s("%d %d", &a, &b);

	if (a > ((b - 100) * 0.9))
		printf("��ü���Դϴ�.");
	else if (a == ((b - 100) * 0.9))
		printf("ǥ���Դϴ�.");
	else
		printf("��ü���Դϴ�.");
	return 0;
}*/


// 5��
/*#include <stdio.h>
int main() {
	int time, a, m;
	printf("���� �ð��� ���̸� �Է��Ͻÿ� : ");
	scanf_s("%d %d", &time, &a);
	if ((time < 17)&&((a>12)&&(a<65)))
		m=34000;
	else if(time>=17)
		m=10000;
	else
		m=25000;

	printf("����� %d�� �Դϴ�.", m);
	return 0;
}*/


// 6��
/*# include <stdio.h>
int main() {
	char munja;
	printf("���ڸ� �Է��Ͻÿ� : ");
	scanf_s("%c", &munja);
	
	if ((munja == 'r') || (munja == 'R'))
		printf("Rectangle");
	else if ((munja == 't') || (munja == 'T'))
		printf("Triangle");
	else if ((munja == 'c') || (munja == 'C'))
		printf("Circle");
	else
		printf("Unknown");
	return 0;
}*/


// 7��
/*#include <stdio.h>
int main() {
	int a,sum=0;
	for (a = 1; a <= 100; a++)
	{
		if (a % 3 == 0)
			sum += a;
	}
	printf("1���� 100 ������ ��� 3�� ����� ���� %d�Դϴ�.", sum);
	return 0;
}*/


// 8��
/*#include <stdio.h>
int main() {
	int num, sum = 0;
	while (1) {
		printf("���� �Է� : ");
		scanf_s("%d", &num);
		if (num < 0)
			break;
		sum += num;
		
	}
	printf("�հ�� %d�Դϴ�", sum);
	return 0;
}*/