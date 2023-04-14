#include <stdio.h>
#include <stdbool.h>	// c 에서 bool 에 필요, c++ 은 필요없음
#include <conio.h>		// (console input output) => _getch 에 필요

int main()
{
	bool study = true;

	while (study)
	{
		printf("Hello World!\n");

		printf("공부중인가요? [네 : 1, 아니요 : 0] => ");
		int answer = -1;

		scanf_s("%d", &answer);

		if (answer == 0)
			study = false; // break;
	}

	char key;

	while (true)
	{
		printf("이동키 입력[w : 상, s : 하, a : 좌, d : 우] => ");
		key = _getch(); // 엔터 없이 문자 입력 가능

		if (key == 'q') // switch 탈출구문은 위에 쓰는게 좋음
			break;

		switch (key)
		{
		case 'w': printf("상\n"); break;
		case 's': printf("하\n"); break;
		case 'a': printf("좌\n"); break;
		case 'd': printf("우\n"); break;
		default : printf("잘못 누름\n"); break;
		}
	}

	printf("\n");

	const int secretCode = 123456; // const : 상수화

	int password = 0;
	int tryCount = 0;
	
	do        // 잘 안씀, 알아두면 좋음
	{
		if (tryCount >= 5)
		{
			printf("5회 실패, 계정이 잠금됩니다.\n");
			break;
		}
		
		printf("비밀번호 입력(5회 실패 시 잠금, 현재 시도 횟수 : %d) => ", tryCount);
		scanf_s("%d", &password);

		tryCount++;

	} while (password != secretCode);

	return 0;
}

/*
	homework
	Up Down Game
	1 ~ 100, 기회 : 10번
	랜덤 숫자 찾기
*/