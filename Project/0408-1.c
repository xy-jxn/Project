#include <stdio.h>
#include <stdlib.h>
int main()
{
	while (1) {
		int x = rand() % 100;
		int y = rand() % 100;
		int a = x, b = y, z;
		printf("%d + %d = ", a, b);
		scanf_s("%d", &z);
		if (z==a+b)
		{
			printf("�����մϴ� �����̿���\n");
			break;
		}
		else
			printf("Ʋ�Ƚ��ϴ�\n\n");
	}
}