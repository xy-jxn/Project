#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	//������ ���� ���� �й��ϱ� < if~else if~else >
	/*int score;
	printf("������ �Է��Ͻÿ� : ");
	scanf_s("%d", &score);

	if (score >= 90 && score <= 100)
		printf("A����\n");
	else if (score >= 80 && score <= 89)
		printf("B����\n");
	else if (score >= 70 && score <= 79)
		printf("C����\n");
	else if (score >= 60 && score <= 69)
		printf("D����\n");
	else if (score >= 50 && score <= 0)
		printf("F����\n");
	else
		printf("���� ��� ������ �ƴմϴ�\n");
	return 0;*/

	// ���� ����ϱ�  < if~else if~else >
	/*char op;
	int x, y;
	printf("������ �Է��Ͻÿ� : ");
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
		printf("��������ʴ� �����Դϴ�.");*/

	//�빮�� �ҹ��� �����ϱ� < if~else if~else >
	/*char x;
		printf("���ڸ� �Է��Ͻÿ� : ");
		scanf("%c", &x);

		if (x >= 65 && x <= 90)
			printf("�빮���Դϴ�.");
		else if (x >= 97 && x <= 122)
			printf("�ҹ����Դϴ�.");
		else if (x >= 48 && x <= 57)
			printf("�����Դϴ�.");
		else
			printf("��Ÿ���� �Դϴ�.");*/

	//���� ���߱� ����  < if~else >
	/*int x, answer;
			printf(">>> ���� ���߱� ���� <<<\n\n");
			srand(time(NULL));
			answer = rand() % 10 + 1;
			printf("1���� 10���� ���ڸ� �Է��ϼ���:");
			scanf("%d", &x);

			if (answer == x)
				printf("�����Դϴ�.");
			else
				printf("Ʋ�Ƚ��ϴ�. ������ %d�Դϴ�.",answer);*/

	//���������� ����  < if~else if~else >
	/*int user, computer;
				printf(" >>> ���������� ���� ���� <<< \n\n");
				printf("3���� �� �����ϼ���.\n(1.���� 2.���� 3.��)\n");
				srand(time(NULL));
				computer = rand() % 3 + 1;
				printf("����� �Է� : ");
				scanf("%d", &user);

				if (computer == user)
					printf(">>�����ϴ�! ��ǻ�ʹ� %d�� �½��ϴ�.",computer);
				else if ((computer==1 && user==2) || (computer == 2 && user == 3) || (computer == 3 && user == 1))
					printf(">>�̰���ϴ�! ��ǻ�ʹ� %d�� �½��ϴ�.", computer);
				else
					printf(">>�����ϴ�! ��ǻ�ʹ� %d�� �½��ϴ�.", computer);*/


	//���ڵ��� ��°� �ޱ� < switch >
	/*int num;
					scanf("%d", &num);

					switch (num)
					{
					case 1:
						printf("���");
						break;
					case 2:
						printf("��");
					case 3:
						printf("�ٳ���");
						break;
					default :
						printf("����");
						break;
					}*/

	//�޿� ���� �ϼ� ����ϱ� < switch > 
	/*int x;
	printf("�� �Է� : ");
	scanf("%d", &x);

	switch (x)
	{
case 2:
		printf("%d���� �ϼ��� 28���Դϴ�", x);
		break;
case 4:
case 6:
case 9:
case 11:
		printf("%d���� �ϼ��� 30���Դϴ�", x);
		break;
default:
		printf("%d���� �ϼ��� 31���Դϴ�", x);
		break;
		}*/

	//���� ����ϱ� < switch >

	/*char op;
	int x, y, result;
	printf("������ �Է��Ͻÿ�(�� : 2 + 5) : ");
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
		printf("�������� �ʴ� �����Դϴ�.");
		break;
	}
		*/
