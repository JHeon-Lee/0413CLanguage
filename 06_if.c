#include <stdio.h>

int main()
{
	int number = 0;
	printf("정수를 입력해주세요 : ");
	scanf_s("%d", &number);

	if (number % 2 == 0)
		printf("짝수 입니다\n");

	if (number % 2 != 0) // else 로 해도 상관없음
	{
		printf("짝수가 아닙니다\n");
		printf("홀수 입니다\n");
	}

	char key;

	printf("어디로 가시나요? : ");
	scanf_s(" %c", &key, sizeof(key)); // char 형은 sizeof 까지 해줘야 안정적

	if (key == 'w')
		printf("상\n");
	else if (key == 's')
		printf("하\n");
	else if (key == 'a')
		printf("좌\n");
	else if (key == 'd')
		printf("우\n");
	else
		printf("잘못 눌렀습니다\n");

	int number2;
	printf("숫자를 입력해주세요 :");
	scanf_s("%d", &number2);

	if (number2 < 10 && number2 > 0)
	{
		if (number2 <= 5)
			printf("5보다 작거나 같은 수 입니다.\n");
		else
			printf("5보다 크고 10보다 작은 수 입니다.\n");
	}
	else
		printf("10보다 크거나 같은 수 입니다.\n");

	// scanf_s 에서 char 형 받을때 한칸 띄우는 이유
	char c1, c2;
	int d;

	printf("문자를 입력하시오 : ");
	scanf_s("%c", &c1);
	
	printf("정수를 입력하시오 : ");
	scanf_s("%d", &d);	

	getchar(); // 사용함으로 버퍼에 enter가 안남게 해줌

	printf("문자를 입력하시오 : ");
	scanf_s("%c", &c2);

	printf("c1 : %c\n, d : %d\n, c2 : %c\n");

	/*
		homework
		대문자를 입력하면 소문자로,
		소문자를 입력하면 대문자로
		출력되는 프로그램 만들기
	*/

	return 0;
}