// �Լ� �ǽ� 1��
/*#include <stdio.h>
int even(int n);
int abs(int n);
int sign(int n);
int main() {
	int n;
	printf("������ �Է��Ͻÿ� : ");
	scanf_s("%d", &n);
	even(n);
	printf("even()�� ������ : %d\n", even(n));
	abs(n);
	printf("abs()�� ������ : %d\n", abs(n));
	sign(n);
	printf("abs()�� ������ : %d\n", sign(n));
}
int even(int n) {
	n %= 2;
	return (n == 0) ? 1 : 0;
}
int abs(n) {
	return (n >= 0) ? n : (n = n * -1);
}
int sign(int n) {
	if (n > 0)
		n = 1;
	else if (n < 0)
		n = -1;
	else
		n = 0;
	return n;
}*/


// �Լ� �ǽ� 2��
/*#include <stdio.h>
int is_multiple(int n, int m);
int main() {
	int n, m;
	printf("ù ��° ���� : ");
	scanf_s("%d", &n);
	printf("�� ��° ���� : ");
	scanf_s("%d", &m);
	is_multiple(n, m);
	if(is_multiple(n, m)==1)
		printf("%d�� %d�� ����Դϴ�.", n, m);
	else
		printf("%d�� %d�� ����� �ƴմϴ�.", n, m);
}
int is_multiple(int n, int m) {
	return (n % m == 0) ? 1 : 0;
}*/


// �Լ� �ǽ� 3��
/*#include <stdio.h>
double ret_bigger(double a, double b);
int main() {
	double a, b;
	printf("�� ���� �Ǽ��� �Է��Ͻÿ� : ");
	scanf_s("%lf %lf", &a, &b);
	ret_bigger(a,b);
	printf("ū ���� %.1lf�Դϴ�.", ret_bigger(a, b));
}
double ret_bigger(double a,double b) {
	return (a > b) ? a : b;
}*/


// �Լ� �ǽ� 4��
/*#include <stdio.h>
void check_alpha(char a);
int main() {
	char a;
	printf("���ڸ� �Է��Ͻÿ� : ");
	scanf_s("%c", &a);
	check_alpha(a);
}
void check_alpha(char a) {
	if (a >= 'a' && a <= 'z')
		printf("%c�� ���ĺ� �����Դϴ�.", a);
	else
		printf("%c�� ���ĺ� ���ڰ� �ƴմϴ�.", a);
}*/ 


// �Լ� �ǽ� 5��
/*#include <stdio.h>
void is_leap(int year);
int main() {
	int year;
	printf("������ �Է��Ͻÿ� : ");
	scanf_s("%d", &year);
	is_leap(year);
}
void is_leap(int year) {
	if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
		printf("%d���� ����(366��)�Դϴ�.", year);
	else
		printf("%d���� ������ �ƴմϴ�", year);
}*/


// �Լ� �ǽ� 6��
/*#include <stdio.h>
int show_disit(int x);
int main() {
	int x;
	printf("������ �Է��Ͻÿ� : ");
	scanf_s("%d", &x);
	show_disit(x);

}
int show_disit(int x) {
	if (x != 0) {
		printf("%d ", x%10); 
		return (show_disit(x/10));
	}
}*/
