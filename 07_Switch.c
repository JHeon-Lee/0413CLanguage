#include <stdio.h>

#define GameStart 1
#define GameManual 2
#define Option 3
#define GameOver 4

int main()
{
	int selmenu;
	printf("메뉴를 선택하세요 [1. 게임 시작, 2. 게임 설명, 3. 설정, 4. 종료] => ");
	scanf_s("%d", &selmenu);

	switch (selmenu)
	{
	case GameStart:
		printf("게임 시작!!\n");
		break;						//	안걸어주면 밑의 case 문들 모두 실행함
	case GameManual:
		printf("게임 설명\n");
		break;
	case Option:
		printf("게임 설정\n");
		break;
	case GameOver:
		printf("게임 종료\n");
		break;
	default:
		printf("잘못된 입력입니다.\n");
		break;
	}

	printf("\n");

	int time = 0;
	int count = 0;

	printf("시간을 입력해주세요 : ");
	scanf_s("%d", &time);

	if (time < 12)
		count = 1;
	else if (time > 12)
		count = 2;
	else
		count = 3;

	switch (count)
	{
	case 1:						//	조건 여러개 : case 1: 밑에 case 2: --- 이런식
		printf("오전 입니다\n");
		break;
	case 2:
		printf("오후 입니다\n");
		break;
	case 3:
		printf("정오 입니다\n");
		break;
	default:
		break;
	}

	return 0;
}