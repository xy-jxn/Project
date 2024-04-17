#include <stdio.h>
int main()
{
	int channel;
	char name;
	printf("원하시는 채널 번호를 입력해주세요 (1~5) : ");
	A:
	scanf_s("%d", &channel);

	switch (channel)
	{
	case 1:
		name = "드라마";
		break;

	case 2:
		name = "예능";
		break;

	case 3:
		name = "교육방송";
		break;

	case 4:
		name = "다큐멘터리";
		break;

	case 5:
		name = "애니메이션";
		break;
	default :
		printf("해당 채널은 운영하지 않습니다.\n다시 채널을 입력해주세요 : ");
			goto A;
	}
	printf("%d번은 %s 채널입니다.",channel,name);
}