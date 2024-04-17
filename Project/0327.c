#include <stdio.h>
int main()
{
	//안녕하세요 10번 출력하기 < for >
	/*int count;

	for (count = 1; count <= 10; count++)
	{
		printf("%d회 출력 : 안녕하세요.\n", count);
	}
	printf("for 문 종료 후 카운트 변수의 값 : %d\n", count);*/


	//Hello world! 5번 출력하기 < for >
	/*for (a = 1; a <= 5; a++)
		printf("Hello world!\n");*/


	//1부터 10까지 더한 값 출력하기 < for >
	/*int num = 1, sum;

	for (sum = 0; num <= 10; num++)
	{
		sum += num;
	}
	printf("1부터 10까지 더한 값 : %d", sum);*/


	//구구단 출력하기 < for >
	/*int a, b;
	printf("정수 입력 : ");
	scanf_s("%d", &a);

	for (b = 1; b <= 9; b++)
		printf("%d * %d = %d\n", a, b, a * b);*/


	//팩토리얼 출력하기(증가)  < for >
	/*int a, b, fact = 1;
	printf("정수 입력 : ");
	scanf_s("%d", &a);

	for (b = 1; a >= b; b++) 
		{
		fact *= b;
		}

	printf("%d!는 %d입니다.", a, fact );*/


	//팩토리얼 출력하기(감소)  < for >
	/*int a, b, fact = 1;
	printf("정수 입력 : ");
	scanf_s("%d", &a);

	for (b = a; b >= 1; b--)
	{
		fact *= b;
	}

	printf("%d!는 %d입니다.", a, fact);*/


	// 무한으로 숫자를 출력하지만 0이 되면 멈추는 식  < break문 >
	/*int num;
	
	while(1)
	{ 
		printf("답하시오 : ");
		scanf_s("%d", &num);

		if (num==0)
			break;
		printf("%d입력\n", num);
	}*/
	

	//정수의 배수 구하기 < continue문 >
	/*int i, count = 0, answer;
	printf("정수를 입력하시오 : ");
	scanf_s("%d", &answer);

	for (i = 1; i <= 100; i++)
	{
		if(i%answer !=0)
		{
			continue;
		}
		count++;
	}
	printf("1부터 100까지의 수 중에서 %d의 배수는 %d개 입니다.", answer, count);*/


	//실수의 총합 구하는데 음수가 나오면 멈추기 < break문 >
	/*int i;
	double num, sum = 0;
	for (i = 1; i <= 10; i++)
	{
		printf("%d번째 실수를 입력하시오 : ", i);
		scanf_s("%lf", &num);
		if (num < 0.0)
			break;
		sum += num;
	}
	printf("합계 : %lf", sum);*/


	//짝수는 출력하고 홀수는 넘기기 < continue문 >
	/*int num;

	for (num = 1; num <= 10; num++)
	{
		if (num % 2 == 1)
			continue;
		printf("정수 : %d\n", num);
	}*/


	return 0;
}