#include <stdio.h>
int main()
{
	int channel;
	char name;
	printf("���Ͻô� ä�� ��ȣ�� �Է����ּ��� (1~5) : ");
	A:
	scanf_s("%d", &channel);

	switch (channel)
	{
	case 1:
		name = "���";
		break;

	case 2:
		name = "����";
		break;

	case 3:
		name = "�������";
		break;

	case 4:
		name = "��ť���͸�";
		break;

	case 5:
		name = "�ִϸ��̼�";
		break;
	default :
		printf("�ش� ä���� ����� �ʽ��ϴ�.\n�ٽ� ä���� �Է����ּ��� : ");
			goto A;
	}
	printf("%d���� %s ä���Դϴ�.",channel,name);
}