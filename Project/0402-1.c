//함수 1-1번 문제
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


// 함수 1-2번 문제
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


// 함수 3번 문제 - 인치값 구하기
/*
#include <stdio.h>
void Exchange(float x);
int main()
{
	float input;
	printf("인치 입력 : ");
	scanf_s("%f", &input);
	Exchange(input);
	return 0;
}
void Exchange(float x)
{
	printf("%.2f 센티미터", x * 2.54);
}
*/


// 함수 4번 문제 - 입력한 알파벳 출력하기
/*#include <stdio.h>
char alpha();
int main(void)
{
	char show;
	printf("<< 1 . 사용자 정의 함수에서 입력한 알파벳 전달 >>\n\n");
	show = alpha();

	printf("<< 3 . main 함수 영역 >>\n");
	printf("전달받은 알파벳 : %c\n", show);
	printf("아스키 코드 값 : %d\n", show);
	return 0;
}
char alpha()
	{
	char x;
	printf("<< 2 . 사용자 정의 함수 영역 >>\n");
	printf("알파벳 입력 : ");
		scanf_s("%c",&x);
		return x;
	}
	*/


// 함수 5번 문제 - 2의 10승 구하기
/*#include <stdio.h>
int power(int x,int y);
int main()
{
	int result;
	result = power(2, 10);
	printf("결과 = %d\n", result);
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


// 함수 6번 문제 - 1부터 input까지 합계 구하기
/*#include <stdio.h>
int sum(int result);

int main()
{
	int input, result = 0;
	printf("정수 입력 : ");
	scanf_s("%d", &input);
	result = sum(input);
	printf("1부터 %d까지 합 = %d\n", input, result);
	
	printf("정수 입력 : ");
	scanf_s("%d", &input);
	printf("1부터 %d까지 합 = %d\n", input, sum(input));

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


//함수 문제 7번 - 소수 구분하기
/*#include <stdio.h>
int prime_check(int j);
int main()
{
	int input, result;
	printf("2 이상의 정수 입력 : ");
	scanf_s("%d", &input);

	if (input == 1)
		printf("입력 범위가 아닙니다.\n");

	else
	{
		result = prime_check(input);
		if (result == 1)
			printf("소수입니다.\n");

		else
			printf("소수가 아닙니다.\n");
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


// 함수 8번 문제 - 입력한 숫자의 약수 구하기
/*#include <stdio.h>
int get_divisior(int j);
int main()
{
	int input;
	printf("정수 입력 : ");
	scanf_s("%d", &input);

	printf("%d의 약수 : ", input);
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


// 함수 9번 문제 - 입력한 수 이하의 소수 구하기
#include <stdio.h>
void prime_print(int x);

int main()
{
	int input;
	printf("정수 입력 : ");
	scanf_s("%d", &input);

	printf("%d이하 소수 출력 : ", input);
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