#include <stdio.h>
int main()
{
	/*char arpha;
	int sum=0;

	while(1) {
		printf("알파벳 입력 : ");
		scanf_s(" %c", &arpha);
		if ((arpha == 'q') || (arpha == 'Q')) {
			printf("총 %d회 실행하여 알파벳을 찾았습니다.\n", sum);
			printf("찾은 알파벳은 대소문자 구별 없이 'Q'입니다.\n");
			break;
		}
		else {
			printf("찾는 알파벳이 아닙니다. 알파벳을 다시 입력하세요.\n\n");
			sum++;
		}
	}

	return 0;
*/



/*
	int input, i, sum = 0;
re:
	printf("정수값입력 : ");
	scanf_s("%d", &input);

	if (input < 0) {
		printf("음의 정수값 %d는 허용하지 않습니다.\n", input);
		printf("양의 정수값을 다시 입력하시오\n\n");
		goto re;
	}
	else {
		for (i = 1; i <= input; i++) {
			sum += i;
		}
		printf("1부터 %d까지의 누적 합계는 %d", input, sum);
	}
	return 0;
*/



	/*int num,i=1,sum=0;
	re:
	printf("정수값 입력 : ");
	scanf_s("%d", &num);
	if (num < 0) {
		printf("음의 정수값을 허용하지 않습니다.\n");
		printf("양의 정수값을 다시 입력하세요.\n\n");
		goto re;
	}
	else {
		do {
			if (i % 2 != 0) {
				sum += i;
			}
			i++;
		} while (i <= num);
		printf("1부터 %d까지 홀수의 누적 합계는 %d", num, sum);
	}
	return 0;*/


	/*int num,i=1,sum=0;
re:
	printf("정수값 입력 : ");
	scanf_s("%d", &num);
	if (num < 0) {
		printf("음의 정수값을 허용하지 않습니다.\n");
		printf("양의 정수값을 다시 입력하세요.\n\n");
		goto re;
	}
	else {
		do {
			if (i % 2 == 0) {
				sum += i;
			}
			i++;
		} while (i <= num);
		printf("1부터 %d까지 홀수의 누적 합계는 %d", num, sum);
	}
	return 0;*/



	/*int num = 0, i, j, sum = 1;
	char dab;
	do {
		printf("<%d회 실행>\n", sum);
		
		for (i = 1; i <= 9; i++) {
			for (j = 1; j <= 9; j++) {
				printf("%d x %d = %-4d", j, i, i * j);
			}
			printf("\n");
		}
		re:
		printf("프로그램을 다시 실행하겠습니까? (Y/N) : ");
		scanf_s(" %c", &dab);
		
		switch (dab)
		{
		case 'y':
		case 'Y':
			printf("\n");
			num = 1;
			sum++;
			break;
		case 'n':
		case 'N':
			num = 0;
			break;
		default:
			printf("입력한 알파벳 \"%c\"는  허용하지 않습니다.\n", dab);
			goto re;
		}
	} while (num==1);
	printf("총 %d회 실행 후 프로그램을 종료합니다.", sum);
	return 0;*/
}


