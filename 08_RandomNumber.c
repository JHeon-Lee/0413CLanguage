#include <stdio.h>
#include <stdlib.h>		// rand 함수에 필요
#include <time.h>		// time 함수에 필요

int main()
{
	printf("%d ", rand() % 10 + 1);
	printf("%d ", rand() % 10 + 1);
	printf("%d ", rand() % 10 + 1);
	printf("%d ", rand() % 10 + 1);
	printf("%d ", rand() % 10 + 1);
	printf("\n\n");

	srand((unsigned int)time(NULL));
	rand();

	printf("%d ", rand() % 10 + 1);
	printf("%d ", rand() % 10 + 1);
	printf("%d ", rand() % 10 + 1);
	printf("%d ", rand() % 10 + 1);
	printf("%d ", rand() % 10 + 1);
	printf("\n\n");

	return 0;
}

/*
	homework
	가위 바위 보 게임 만들기
	내가 10번 이기면 종료
*/