#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	//성적에 맞춰 학점 분배하기 < if~else if~else >
	/*int score;
	printf("성적을 입력하시오 : ");
	scanf_s("%d", &score);

	if (score >= 90 && score <= 100)
		printf("A학점\n");
	else if (score >= 80 && score <= 89)
		printf("B학점\n");
	else if (score >= 70 && score <= 79)
		printf("C학점\n");
	else if (score >= 60 && score <= 69)
		printf("D학점\n");
	else if (score >= 50 && score <= 0)
		printf("F학점\n");
	else
		printf("점수 허용 구간이 아닙니다\n");
	return 0;*/

	// 수식 계산하기  < if~else if~else >
	/*char op;
	int x, y;
	printf("수식을 입력하시오 : ");
	scanf("%d %c %d", &x, &op, &y);

	printf("%d %c %d = ", x, op, y);
	if (op == '+')
		printf("%d", x + y);
	else if (op == '-' )
		printf("%d", x - y);
	else if(op =='*')
		printf("%d", x * y);
	else if (op == '/' )
		printf("%d", x / y);
	else if(op == '%')
		printf("%d", x % y);
	else
		printf("허용하지않는 범위입니다.");*/

	//대문자 소문자 구분하기 < if~else if~else >
	/*char x;
		printf("문자를 입력하시오 : ");
		scanf("%c", &x);

		if (x >= 65 && x <= 90)
			printf("대문자입니다.");
		else if (x >= 97 && x <= 122)
			printf("소문자입니다.");
		else if (x >= 48 && x <= 57)
			printf("숫자입니다.");
		else
			printf("기타문자 입니다.");*/

	//숫자 맞추기 게임  < if~else >
	/*int x, answer;
			printf(">>> 숫자 맞추기 게임 <<<\n\n");
			srand(time(NULL));
			answer = rand() % 10 + 1;
			printf("1부터 10까지 숫자를 입력하세요:");
			scanf("%d", &x);

			if (answer == x)
				printf("정답입니다.");
			else
				printf("틀렸습니다. 정답은 %d입니다.",answer);*/

	//가위바위보 게임  < if~else if~else >
	/*int user, computer;
				printf(" >>> 가위바위보 게임 시작 <<< \n\n");
				printf("3가지 중 선택하세요.\n(1.가위 2.바위 3.보)\n");
				srand(time(NULL));
				computer = rand() % 3 + 1;
				printf("사용자 입력 : ");
				scanf("%d", &user);

				if (computer == user)
					printf(">>비겼습니다! 컴퓨터는 %d을 냈습니다.",computer);
				else if ((computer==1 && user==2) || (computer == 2 && user == 3) || (computer == 3 && user == 1))
					printf(">>이겼습니다! 컴퓨터는 %d을 냈습니다.", computer);
				else
					printf(">>졌습니다! 컴퓨터는 %d을 냈습니다.", computer);*/


	//숫자따라 출력값 받기 < switch >
	/*int num;
					scanf("%d", &num);

					switch (num)
					{
					case 1:
						printf("사과");
						break;
					case 2:
						printf("배");
					case 3:
						printf("바나나");
						break;
					default :
						printf("과일");
						break;
					}*/

	//달에 따라 일수 출력하기 < switch > 
	/*int x;
	printf("달 입력 : ");
	scanf("%d", &x);

	switch (x)
	{
case 2:
		printf("%d월의 일수는 28일입니다", x);
		break;
case 4:
case 6:
case 9:
case 11:
		printf("%d월의 일수는 30일입니다", x);
		break;
default:
		printf("%d월의 일수는 31일입니다", x);
		break;
		}*/

	//수식 계산하기 < switch >

	/*char op;
	int x, y, result;
	printf("수식을 입력하시오(예 : 2 + 5) : ");
	scanf("%d %c %d", &x, &op, &y);
		
	switch (op)
	{
	case '+':
		result = x + y;
		printf("%d + %d = %d", x, y, result);
		break;
	case '-':
		result = x - y;
		printf("%d - %d = %d", x, y, result);
		break;
	case '*':
		result = x * y;
		printf("%d * %d = %d", x, y, result);
		break;
	case '/':
		result = x / y;
		printf("%d / %d = %d", x, y, result);
		break;
	case '%':
		result = x % y;
		printf("%d % %d = %d", x, y, result);
		break;
	default:
		printf("지원되지 않는 수식입니다.");
		break;
	}
		*/
