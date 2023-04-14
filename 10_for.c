#include <stdio.h>

int main()
{
	for (int i = 0; i < 5; i++)
	{
		printf("for문 명령어 %d번 반복\n", i + 1);
	}

	printf("\n");

	for (int i = 5; i; i--)
	{
		printf("for문 명령어 %d번 반복\n", i + 1); // 컴퓨터가 0은 false로 간주하므로 i = 0 에서 종료된다
	}

	//for (;;)	//	무한루프
	//{
	//	printf("무한 루프\n");
	//}

	char num1, num2; // 참고용

	for (; int count = scanf_s("%c %c", &num1, sizeof(num1), &num2, 1);)
	{
	    printf("%d\n", count);
	    while (getchar() != '\n');


	for (int i = 0, j = 0; i < 10 && j < 10; i++, j += 2)
	{
		printf("%d", i);
		printf("%d\n", j);
	}

	printf("\n");

	for (int i = 0; i <= 10; i++)
	{
		if (i % 3 == 0)
		{
			continue;
		}

		printf("%d", i);
	}

	printf("\n\n");

	for (int c = 'A'; c <= 'Z'; c++)
		printf("%c", c);

	for (int c = 'Z'; c <= 'A'; c--)
		printf("%c", c);

	printf("\n\n");

	int total = 0;
	int num = 0;

	printf("0부터 num까지의 덧셈을 구합니다. num : ");
	scanf_s("%d", &num);

	for (int i = 0; i < num; i++)
	{
		total += i;
	}
	printf("결과 : %d\n", total);

	printf("\n\n");

	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			printf("*");
		}
		printf("\n");
	}

	for (int i = 1; i < 10; i++)
	{
		printf("***구구단 %d단 시작!!!***\n", i);

		for (int j = 1; j < 10; j++)
		{
			printf("%d * %d = %2d\n", i, j, i * j); // %2d : 띄워쓰기
		}

		printf("***구구단 %d단 끝!!!***\n", i);
	}

	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < i + 1; j++)
		{
			printf("*");
		}
		printf("\n");
	}

	return 0;
}

/*
	homework
	*
	**
	***
	****
	*****
	
	*****
	****
	***
	**
	*

	*****
	 **** 
	  *** 
	   ** 
	    *

	    *
	   **
	  ***
	 ****
	*****

	  *
	 ***
	*****
	 ***
	  *

	별찍기 숙제
*/