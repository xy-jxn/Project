#include <stdio.h>
int main()
{
	/*int a, b;
	printf("100이하의 숫자 두개를 입력하시오 : ");
	scanf_s("%d %d", &a, &b);

	(a < b) ? printf("a=%d\n", a) : printf("b=%d\n", b);

	printf("---------------\n");
	if (a > b)
		printf("%d\n", b);
	else if (a < b)
		printf("%d\n", a);
	else
		printf("표현할 수 없습니다.");*/

	/*int a;
	printf("자연수를 입력하시오 : ");
	scanf_s("%d", &a);
	
	if (a % 2 == 0)
	{
		if (a < 100 && a>0)
			printf("Yes");
	}
		else
			printf("No");*/

	/*int a;
	printf("자연수를 입력하시오 : ");
	scanf_s("%d", &a);
	
	if (a > 0 && a < 100)
	{
		if (a % 2 == 0)
			printf("even");
		else
			printf("odd");
	}
	else if (a == 0)
		printf("zero");
	else
		("허용 구간이 아닙니다.");*/

	/*int a;
	printf("키를 입력하시오 : ");
	scanf_s("%d", &a);
	
	if (a >= 120 && a <= 150)
		printf("yes");
	else
		printf("no");*/
	
	/*int a, b, c;
	printf("자연수 3개를 입력하시오 : ");
	scanf_s("%d %d %d", &a, &b, &c);

	if (a < b && a < c)
		printf("%d", a);
	else if (b < a && b < c)
		printf("%d", b);
	else
		printf("%d", c);*/

	/*int a, b, c;
	printf("세 변의 길이를 적으시오 : ");
	scanf_s("%d %d %d", &a, &b, &c);
	
	if (a < b + c && b < a + c && c < a + b)
		printf("Yes");
	else
		printf("No");*/

	/*int jumsu;
	char grade;

	printf("점수 입력 : ");
	scanf_s("%d", &jumsu);

	if (jumsu >= 0 && jumsu < 100)
	{
		if (jumsu >= 90)
			grade = 'A';
	else if (jumsu >= 80)
			grade = 'B';
	else if (jumsu >= 70)
			grade = 'C';
	else if (jumsu >= 60)
			grade = 'D';
	else 
			grade = 'F';

		printf("입력한 점수 : %d\n점수등급 : %c등급", jumsu, grade);
	}

	else
		printf("허용 구간이 아닙니다.");*/

	char blood;
	printf("A형 : A 또는 a\n");
	printf("B형 : B 또는 b\n");
	printf("AB형 : C 또는 c\n");
	printf("O형 : O 또는 o\n\n");
	printf("혈액형에 해당하는 알파벳 입력 : ");
	scanf_s("%c", &blood, sizeof(blood));

	printf("\n----------결과---------\n\n");

	if (blood == 'A' || blood == 'a')
		printf("부드럽고 섬세한 성향");
	else if (blood == 'B' || blood == 'b')
		printf("주위 변화에 민감한 성향");
	else if (blood == 'C' || blood == 'c')
		printf("예술적인 감각을 가진 성향");
	else if (blood == 'O' || blood == 'o')
		printf("활발하고 쾌활한 성향");
	else
		printf("허용하지 않는 문자입니다.");

	return 0;


}