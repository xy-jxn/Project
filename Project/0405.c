// 함수 실습 1번
/*#include <stdio.h>
int even(int n);
int abs(int n);
int sign(int n);
int main() {
	int n;
	printf("정수를 입력하시오 : ");
	scanf_s("%d", &n);
	even(n);
	printf("even()의 실행결과 : %d\n", even(n));
	abs(n);
	printf("abs()의 실행결과 : %d\n", abs(n));
	sign(n);
	printf("abs()의 실행결과 : %d\n", sign(n));
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


// 함수 실습 2번
/*#include <stdio.h>
int is_multiple(int n, int m);
int main() {
	int n, m;
	printf("첫 번째 정수 : ");
	scanf_s("%d", &n);
	printf("두 번째 정수 : ");
	scanf_s("%d", &m);
	is_multiple(n, m);
	if(is_multiple(n, m)==1)
		printf("%d은 %d의 배수입니다.", n, m);
	else
		printf("%d은 %d의 배수가 아닙니다.", n, m);
}
int is_multiple(int n, int m) {
	return (n % m == 0) ? 1 : 0;
}*/


// 함수 실습 3번
/*#include <stdio.h>
double ret_bigger(double a, double b);
int main() {
	double a, b;
	printf("두 개의 실수를 입력하시오 : ");
	scanf_s("%lf %lf", &a, &b);
	ret_bigger(a,b);
	printf("큰 수는 %.1lf입니다.", ret_bigger(a, b));
}
double ret_bigger(double a,double b) {
	return (a > b) ? a : b;
}*/


// 함수 실습 4번
/*#include <stdio.h>
void check_alpha(char a);
int main() {
	char a;
	printf("문자를 입력하시오 : ");
	scanf_s("%c", &a);
	check_alpha(a);
}
void check_alpha(char a) {
	if (a >= 'a' && a <= 'z')
		printf("%c는 알파벳 문자입니다.", a);
	else
		printf("%c는 알파벳 문자가 아닙니다.", a);
}*/ 


// 함수 실습 5번
/*#include <stdio.h>
void is_leap(int year);
int main() {
	int year;
	printf("연도를 입력하시오 : ");
	scanf_s("%d", &year);
	is_leap(year);
}
void is_leap(int year) {
	if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
		printf("%d년은 윤년(366일)입니다.", year);
	else
		printf("%d년은 윤년이 아닙니다", year);
}*/


// 함수 실습 6번
/*#include <stdio.h>
int show_disit(int x);
int main() {
	int x;
	printf("정수를 입력하시오 : ");
	scanf_s("%d", &x);
	show_disit(x);

}
int show_disit(int x) {
	if (x != 0) {
		printf("%d ", x%10); 
		return (show_disit(x/10));
	}
}*/
