#include <stdio.h>
int main()
{
	/*char arpha;
	int sum=0;

	while(1) {
		printf("���ĺ� �Է� : ");
		scanf_s(" %c", &arpha);
		if ((arpha == 'q') || (arpha == 'Q')) {
			printf("�� %dȸ �����Ͽ� ���ĺ��� ã�ҽ��ϴ�.\n", sum);
			printf("ã�� ���ĺ��� ��ҹ��� ���� ���� 'Q'�Դϴ�.\n");
			break;
		}
		else {
			printf("ã�� ���ĺ��� �ƴմϴ�. ���ĺ��� �ٽ� �Է��ϼ���.\n\n");
			sum++;
		}
	}

	return 0;
*/



/*
	int input, i, sum = 0;
re:
	printf("�������Է� : ");
	scanf_s("%d", &input);

	if (input < 0) {
		printf("���� ������ %d�� ������� �ʽ��ϴ�.\n", input);
		printf("���� �������� �ٽ� �Է��Ͻÿ�\n\n");
		goto re;
	}
	else {
		for (i = 1; i <= input; i++) {
			sum += i;
		}
		printf("1���� %d������ ���� �հ�� %d", input, sum);
	}
	return 0;
*/



	/*int num,i=1,sum=0;
	re:
	printf("������ �Է� : ");
	scanf_s("%d", &num);
	if (num < 0) {
		printf("���� �������� ������� �ʽ��ϴ�.\n");
		printf("���� �������� �ٽ� �Է��ϼ���.\n\n");
		goto re;
	}
	else {
		do {
			if (i % 2 != 0) {
				sum += i;
			}
			i++;
		} while (i <= num);
		printf("1���� %d���� Ȧ���� ���� �հ�� %d", num, sum);
	}
	return 0;*/


	/*int num,i=1,sum=0;
re:
	printf("������ �Է� : ");
	scanf_s("%d", &num);
	if (num < 0) {
		printf("���� �������� ������� �ʽ��ϴ�.\n");
		printf("���� �������� �ٽ� �Է��ϼ���.\n\n");
		goto re;
	}
	else {
		do {
			if (i % 2 == 0) {
				sum += i;
			}
			i++;
		} while (i <= num);
		printf("1���� %d���� Ȧ���� ���� �հ�� %d", num, sum);
	}
	return 0;*/



	/*int num = 0, i, j, sum = 1;
	char dab;
	do {
		printf("<%dȸ ����>\n", sum);
		
		for (i = 1; i <= 9; i++) {
			for (j = 1; j <= 9; j++) {
				printf("%d x %d = %-4d", j, i, i * j);
			}
			printf("\n");
		}
		re:
		printf("���α׷��� �ٽ� �����ϰڽ��ϱ�? (Y/N) : ");
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
			printf("�Է��� ���ĺ� \"%c\"��  ������� �ʽ��ϴ�.\n", dab);
			goto re;
		}
	} while (num==1);
	printf("�� %dȸ ���� �� ���α׷��� �����մϴ�.", sum);
	return 0;*/
}


