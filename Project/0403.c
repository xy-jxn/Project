// 재귀함수 예제 1 - 5까지 출력하는 함수
/*#include <stdio.h>
void Re(int num);
int main()
{
	Re(5);
	return 0;
}

void Re(int num)
{
	if (num > 0)
	{
		printf("Re %d\n", num);
		Re(num -1);
	}
}*/


// 재귀함수 9번 문제
/*#include <stdio.h>
int foun(int n);
int main(void)
{
	int a = 100, result = 0;
	result = foun(a) + 50;
	printf("a : %d \n", a);
	printf("result : %d\n", result);

	return 0;
}

int foun(int n)
{
	n = 200;
	return n;
}*/



// 제귀함수 10-1번 문제 문제
/*#include <stdio.h>
int sum(int a);
int main(void)
{
	int result;
	result = sum(5);
	printf("result = %d\n", result);
	return 0;
}

int sum(int a)
{
	printf("%02d ", a);
	if (a < 1)
		return 1;
	else
		return (a + sum(a - 2));
}*/


// 제귀함수 10-2번 문제 문제
/*#include <stdio.h>
int f(int a);
int main(void)
{
	int result;
	result = f(5);
	printf("result = %d\n", result);
	return 0;
}

int f(int a)
{
	printf("%02d ", a);
	if (a < 1)
		return 3;
	else
		return (3 * f(a - 3) + 1);
}*/


// 재귀함수  11 - 1번 문제
/*#include <stdio.h>
float add(int su1, int su2);

int main(void)
{
	int result;
	result = add(3, 8);
	printf("result = %d", result);
	return 0;
}

float add(int su1, int su2)
{
	return su1 + su2;
}*/


/*#include <stdio.h>;
int main()
{
	int sum = 0, i;
	for (int i = 1; i <= 10; i++)
	{
		sum += i;
		printf("\n %d", i);
	}
	printf("\n %d", sum);
	
}*/