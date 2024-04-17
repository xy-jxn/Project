/*#include <stdio.h>
int a[11][11];
int main() {
	int n, i, j, k = 1;
	scanf_s("%d", &n);
	for (i = 0; i < n; i++) {
		for (j = n - 1; j >= 0; j--) {
			a[j][i] = k++;
		}
	}
	for (i = 0; i < n; i++) {
		for (j = 0; j < n; j++) {
			printf("%3d", a[i][j]);
		}
		printf("\n");
	}
	return 0;
}*/

/*#include <stdio.h>
int a[11][11];
int main() {
	int n, i, j, k = 1;
	scanf_s("%d", &n);
	for (i = 0; i < n; i++) {
		for (j = i; j >= 0; j--) {
			a[i][j] = k++;
		}
	}
	for (i = 0; i < n; i++) {
		for (j = 0; j < n; j++) {
			printf("%3d", a[i][j]);
		}
		printf("\n");
	}
	return 0;
}*/

/*#include <stdio.h>
int a[11][11];
int main() {
	int n, i, j, k = 1;
	scanf_s("%d", &n);
	for (i = 0; i < n; i++) {
		for (j = 0; j <n; j++) {
			if ((i == j) || ((i + j) == n - 1))
				a[i][j] = k++;
		}
	}
	for (i = 0; i < n; i++) {
		for (j = 0; j < n; j++) {
			printf("%3d", a[i][j]);
		}
		printf("\n");
	}
	return 0;
}*/


#include <stdio.h>
#define SIZE 5
int main() {
	int i, k;
	int list[SIZE] = {7,9,1, 16,3 };
	for (i = 0; i < SIZE; i++) {
		for (k = i; k < SIZE; k++) {
			if (list[i] > list[k])
			{
				int tmp = list[i];
				list[i] = list[k];
				list[k] = tmp;
			}
		}
	}
	for (i = 0; i < SIZE; i++) {
		printf("%3d",list[i]);
	}
	return 0;
}