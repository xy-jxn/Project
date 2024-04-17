// 1번
/*#include <stdio.h>
int main() {
	int a, b;
	printf("정수를 입력하시오 : ");
	scanf_s("%d", &a);
	printf("정수를 입력하시오 : ");
	scanf_s("%d", &b);
	if (a % b == 0)
		printf("약수입니다.");
	else
		printf("약수가 아닙니다.");
	return 0;
}*/


// 2번
/*#include <stdio.h>
int main() {
	int a, b, c;
	printf("정수 3개을 입력하시오 : ");
	scanf_s("%d %d %d", &a, &b, &c);
	if (a > b)
		a = b;
	if (a > c)
		a = c;
	printf("제일 작은 정수는 %d입니다.", a);
	return 0;
}*/


// 3번
/*#include <stdio.h>
int main() {
	int a, b;
	printf("키를 입력하시오 : ");
	scanf_s("%d", &a);
	printf("나이를 입력하시오 : ");
	scanf_s("%d", &b);
	if (a >= 140 && b >= 10)
		printf("타도 좋습니다.");
	else
		printf("죄송합니다.");
	return 0;
}*/


// 4번
/*#include <stdio.h>
int main() {
	int a, b;
	printf("체중과 키를 입력하시오 : ");
	scanf_s("%d %d", &a, &b);

	if (a > ((b - 100) * 0.9))
		printf("과체중입니다.");
	else if (a == ((b - 100) * 0.9))
		printf("표준입니다.");
	else
		printf("저체중입니다.");
	return 0;
}*/


// 5번
/*#include <stdio.h>
int main() {
	int time, a, m;
	printf("현재 시간과 나이를 입력하시오 : ");
	scanf_s("%d %d", &time, &a);
	if ((time < 17)&&((a>12)&&(a<65)))
		m=34000;
	else if(time>=17)
		m=10000;
	else
		m=25000;

	printf("요금은 %d원 입니다.", m);
	return 0;
}*/


// 6번
/*# include <stdio.h>
int main() {
	char munja;
	printf("문자를 입력하시오 : ");
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


// 7번
/*#include <stdio.h>
int main() {
	int a,sum=0;
	for (a = 1; a <= 100; a++)
	{
		if (a % 3 == 0)
			sum += a;
	}
	printf("1부터 100 사이의 모든 3의 배수의 합은 %d입니다.", sum);
	return 0;
}*/


// 8번
/*#include <stdio.h>
int main() {
	int num, sum = 0;
	while (1) {
		printf("정수 입력 : ");
		scanf_s("%d", &num);
		if (num < 0)
			break;
		sum += num;
		
	}
	printf("합계는 %d입니다", sum);
	return 0;
}*/