#include <stdio.h>
int main()
{
	int choice, means, money, addmoney;

	printf("----------���Ǳ�----------\n");
	printf("/ �ݶ�   : 1\n  ���̴� : 2\n  �꽺   : 3\n  Ŀ��   : 4  /\n");
	printf("������� ������ : ");
	a:
	scanf_s("%d", &choice);
	
	//  ����� ����
	{
		if (choice == 1)
		{
			printf("\n�ݶ��� ���� 2500�� �Դϴ�.\n");
			choice = 2500;
		}

		else if (choice == 2)
		{
			printf("\n���̴��� ���� 2000�� �Դϴ�.\n");
			choice = 2000;
		}

		else if (choice == 3)
		{
			printf("\n������ �꽺�� ���� 3000�� �Դϴ�.\n");
			choice = 3000;
		}

		else if (choice == 4)
		{
			printf("\nĿ���� ���� 1500�� �Դϴ�.\n");
			choice = 1500;
		}

		else
		{
			printf("\n\n�Ǹ����� �ʴ� ��ǰ�Դϴ�.\n�ٽ� ������� ����ּ��� : ");
			goto a;
		}
	}

	// �����ϱ�
	{
		printf("���� : 1��  /  ī�� : 2��\n");
		printf("����� ���� ������ ����ּ��� : ");
		scanf_s("%d", &means);

		switct(means)
		{
			case 1:
				printf("���� ������ �����ϼ̽��ϴ�. \n���� �Է����ּ��� : ");
				scanf_s("%d", &money);
				break;

			case 2:
				printf("ī�� ������ �����ϼ̽��ϴ�. \nī�忡 �����ִ� �ܾ��� �Է����ּ��� : ");
				scanf_s("%d", &money);
				break;
		}
	}

	//�Ž����� �ֱ�
	{
		if (money >= choice)
		{
			printf("\n\n----------�Ž�����----------");
			money -= choice;
			printf("\nõ�� : %d��\n", money / 1000);
			money %= 1000;

			printf("����� : %d��\n", money / 500);
			money %= 500;

			printf("��� : %d��\n\n", money / 100);

			printf("�Ž������� ������� �޾ư�����.\n");
		}
		else
		{
			while (money < choice);
			{
				printf("���� �����մϴ�. ���� ������ �ݾ� : %d\n���� �߰��� �־��ּ��� : ", choice);
				scanf_s("%d", &addmoney);
				money += addmoney;
			}
		}
	} 
	return 0;
}
