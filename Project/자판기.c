#include <stdio.h>
int main()
{
	int choice, means, money, addmoney;

	printf("----------자판기----------\n");
	printf("/ 콜라   : 1\n  사이다 : 2\n  쥬스   : 3\n  커피   : 4  /\n");
	printf("음료수를 고르세요 : ");
	a:
	scanf_s("%d", &choice);
	
	//  음료수 고르기
	{
		if (choice == 1)
		{
			printf("\n콜라의 값은 2500원 입니다.\n");
			choice = 2500;
		}

		else if (choice == 2)
		{
			printf("\n사이다의 값은 2000원 입니다.\n");
			choice = 2000;
		}

		else if (choice == 3)
		{
			printf("\n오렌지 쥬스의 값은 3000원 입니다.\n");
			choice = 3000;
		}

		else if (choice == 4)
		{
			printf("\n커피의 값은 1500원 입니다.\n");
			choice = 1500;
		}

		else
		{
			printf("\n\n판매하지 않는 상품입니다.\n다시 음료수를 골라주세요 : ");
			goto a;
		}
	}

	// 결제하기
	{
		printf("현금 : 1번  /  카드 : 2번\n");
		printf("사용할 결제 수단을 골라주세요 : ");
		scanf_s("%d", &means);

		switct(means)
		{
			case 1:
				printf("현금 결제를 선택하셨습니다. \n돈은 입력해주세요 : ");
				scanf_s("%d", &money);
				break;

			case 2:
				printf("카드 결제를 선택하셨습니다. \n카드에 남아있는 잔액을 입력해주세요 : ");
				scanf_s("%d", &money);
				break;
		}
	}

	//거스름돈 주기
	{
		if (money >= choice)
		{
			printf("\n\n----------거스름돈----------");
			money -= choice;
			printf("\n천원 : %d장\n", money / 1000);
			money %= 1000;

			printf("오백원 : %d개\n", money / 500);
			money %= 500;

			printf("백원 : %d개\n\n", money / 100);

			printf("거스름돈과 음료수를 받아가세요.\n");
		}
		else
		{
			while (money < choice);
			{
				printf("돈이 부족합니다. 현재 지불한 금액 : %d\n돈을 추가로 넣어주세요 : ", choice);
				scanf_s("%d", &addmoney);
				money += addmoney;
			}
		}
	} 
	return 0;
}
