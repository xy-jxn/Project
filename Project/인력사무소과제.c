/*#include <stdio.h>
int main()
{
	int i, j, k;
	for (i = 1; i <= 3; i++) {
		for (j = 3-i; j > 0; j--) {
			printf(" ");
		}
		for (k = 0; k < i; k++) {
			printf("*");
		}
		for (k = 1; k < i; k++) {
			printf("*");
		}
		printf("\n");
	}
	for (i = 2; i >= 1; i--) {
		for (j = 3-i; j > 0; j--) {
			printf(" ");
		}
		for (k = i; k > 0; k--) {
			printf("*");
		}
		for (k = 1; k < i; k++) {
			printf("*");
		}
		printf("\n");
	}
	return 0;
}*/



/*#include <stdio.h>
int main()
{
	int i, j, k, num;
	printf("���� �Է� : ");
	scanf_s("%d", &num);

	for (i = 1; i <= num; i++) {
		for (j = num - i; j > 0; j--) {
			printf(" ");
		}
		for (k = 1; k <= i; k++) {
			printf("*");
		}
		printf("\n");
	}
	return 0;
}*/


/*#include <stdio.h>
int main()
{
	int i, j, k, num;
	printf("���� �Է� : ");
	scanf_s("%d", &num);

	//	Į���� ������ �κ�
	for (i = 1; i <= num; i++) {
		for (j = num * 2 - i; j >= 1; j--) {
			printf(" ");
		}
		for (k = 1; k <= i; k++) {
			printf("*");
		}
		printf("\n");
	}
	
	//	 Į���� ������ �κ�
	for (i = 1; i <= num; i++) {
		for (j = 1; j <= num; j++) {
			printf(" ");
		}
		for (k = 1; k <= num; k++) {
			printf("*");
		}
		printf("\n");
	}

	//	�ڵ��� �κ�
	for (i = 1; i <= num * 3; i++) {
		printf("*");
	}
	printf("\n");

	//	������ �κ�
	for (i = 1; i <= num; i++) {
		for (j = 1; j <= num; j++) {
			printf(" ");
		}
		for (k = 1; k <= num; k++) {
			printf("*");
		}
		printf("\n");
	}

	return 0;
}*/


#include <stdio.h>
int main()
{
	int i, num, sum = 1;
	printf("���� �Է� : ");
	scanf_s("%d", &num);
	printf("%d! = ", num);

	for (i = 1; i <= num; i++) {
		sum *= i;
		if (i != num)
			printf("%d * ",i);
		else
			printf("%d = %d�Դϴ�\n",i,sum);
	}
	return 0;
}