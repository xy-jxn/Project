#include <stdio.h>
int main()
{
	//반성문 10번 출력하기 < while >
	/*int i = 0;
	while (i =< 10)
		{
			printf("수업시간에 떠들지 않겠습니다.\n");
			i +=1;
		}
	return 0;*/

	//구구단 출력하기 < while >
	/*int num1, num2 = 1;
	printf("출력하고 싶은 단 : ");
	scanf_s("%d", &num1);
	while (num2 <= 9)
	{
		printf("%d*%d=%d\n", num1, num2, num1 * num2);
		num2 += 1;
	}*/

	//최대공약수 구하기
	/*int x, y, r;
	printf("두 개의 정수를 입력하시오 : ");
	scanf_s("%d %d", &x, &y);

	while (y != 0)
	{
		r = x % y;
		x = y;
		y = r;
	}
	printf("최대 공약수는 %d입니다.",x);*/

	// 입력 숫자가 0이면 출력 멈추기 < do-while >
	/*int answer;
	do
	{
		printf("입력하시오 : ");
		scanf_s("%d", &answer);
		printf("%d입력\n", answer);
	} while (answer != 0);*/

	//숫자 맞추기 < do-while >
	/*int answer = 41;
	int guess;
	int tries = 0;

	do {
		printf("숫자를 입력하시오 : ");
		scanf_s("%d", &guess);
		tries += 1;
		if (guess > answer)
			printf("제시한 정수가 정답보다 높습니다\n\n");
		if (guess < answer)
			printf("제시한 정수가 정답보다 낮습니다\n\n");
	} while (guess != answer);

	printf("축하합니다.시도횟수 = %d\n", tries);*/

	// 구구단 출력하기 < do-while >
	/*int i = 1;
	int num;

	printf("출력할 한 단을 적으시오 : ");
	scanf_s("%d", &num);

	do
	{
		printf("%d * %d = %d\n", i, num, i * num);
		i++;
	} while (i <= 9);*/

	//누적 합계 구하기 < do-while >
	/*int a, b = 1, sum = 0;
	printf("정수 입력 : ");
	scanf_s("%d", &a);

	do
	{
		sum += b;
		printf("%d회 실행 : 누적합계는 %d\n", b, sum);
		b++;
	} while (a >= b);

	printf("1부터 %d까지 합계 = %d\n", a, sum);*/

	return 0;

}