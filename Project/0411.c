//	����1
/*#include <stdio.h>
int main() {
	int arr1[2][3] = { 1,2,3,4,5,6 };
	int arr2[2][3] = { {1,2,3},{4,5,6} };
	
	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 3; j++) {
			printf("%3d", arr1[i][j]);
		}
		printf("\n");
	}
}*/


//	9-1����_���η� ����
/*#include <stdio.h>
int main() {
	int x;
	printf("�迭 ũ�� �Է� : ");
	scanf_s("%d", &x);
	int b[50][50] = { };
	int cnt = 0;
	for (int i = 0; i < x; i++) {
		for (int j = 0; j < x; j++) {
			cnt++;
			b[i][j] = cnt;
		}
	}
	for (int i = 0; i < x; i++) {
		for (int j = 0; j < x; j++) {
			printf("%3d", b[i][j]);
		}
		printf("\n");
	}

	// ���η� ���
	printf("\n");
	for (int j = 0; j < x; j++) {
		for (int i = 0; i < x; i++) {
			printf("%3d", b[i][j]);
		}
		printf("\n");
	}
	return 0;
}*/


//	9-2����_�����ϱ�
/*#include <stdio.h>
int main() {
	int arr[3][3] = { {1,2,3},{3,4},{5} };
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			printf("%3d", arr[i][j]);
		}
		printf("\n");
	}
}*/


//	9-3_���η� ���� �迭
/*#include <stdio.h>
#define SIZE 5
int main() {
	int b[SIZE][SIZE] = { 0 };
	int cnt = 0;
	for (int i = 0; i < SIZE; i++) {
		if (i % 2 == 0) {
			for (int j = 0; j < SIZE; j++) {
				cnt++;
				b[i][j] = cnt;
			}
		}

		else {
			for (int j = SIZE-1; j >= 0; j--) {
				cnt++;
				b[i][j] = cnt;
			}
		}
	}

		for (int i = 0; i < SIZE; i++) {
			for (int j = 0; j < SIZE; j++) {
				printf("%3d ", b[i][j]);
			}
			printf("\n");
		}
		return 0;
}*/


//	9-3����_���η� ���� �迭
/*#include <stdio.h>
#define SIZE 5
int main() {
	int b[SIZE][SIZE] = { 0 };
	int cnt = 0;
	for (int j = 0; j < SIZE; j++) {
		if (j % 2 == 0) {
			for (int i = 0; i < SIZE; i++) {
				cnt++;
				b[i][j] = cnt;
			}
		}

		else {
			for (int i = SIZE-1; i >= 0; i--) {
				cnt++;
				b[i][j] = cnt;
			}
		}
	}

		for (int i = 0; i < SIZE; i++) {
			for (int j = 0; j < SIZE; j++) {
				printf("%3d ", b[i][j]);
			}
			printf("\n");
		}
		return 0;
}*/


//	9-5_A+B=C
/*#include <stdio.h>
int main() {
	int A[3][3] = {
		{1,2,3},
		{4,5,6},
		{7,8,9} };
	int B[3][3] = {
		{9,8,7},
		{6,5,4},
		{3,2,1} };

	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			printf("%d ", A[i][j] + B[i][j]);
		}
		printf("\n");
	}
}*/


//	9-6����_
#include <stdio.h>
int main() {
	int grade[3][5] = { 0 };
	int sub_sum = 0, sum = 0;

	for (int i = 0; i < 3; i++) {
		printf("�б� %d�� ���� �Է�(5��) : ", i + 1);
		for (int j = 0; j < 5; j++) {
			scanf_s("%d", &grade[i][j]);
			sub_sum += grade[i][j];
		}
		printf("�б� %d�� ���� ��� : %.2f\n\n", i + 1, sub_sum / 5.0);
		sum += sub_sum;
		sub_sum = 0;
	}
	printf("\n��ü ���� ��� : %.2f\n", sum / 15.0);
}