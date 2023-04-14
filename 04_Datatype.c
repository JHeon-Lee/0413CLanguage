#include <stdio.h>
#include <stdbool.h> // c++에선 필요없지만 c에선 필요
/*
	Data Type ( 자료형 )
	char		:	1byte
	short		:	2byte
	int			:	4byte
	long long	:	8byte
	float		:	4byte
	double		:	8byte
	long double :	
*/
int main()
{
	char c1 = 'A';
	char c2 = 65;

	printf("character c1	: %c\n", c1);
	printf("character c2	: %c\n", c2); // ASCII Code 에 의해 65 -> A 해당
	printf("character size	: %d\n", sizeof(char));
	printf("character size	: %d\n\n", sizeof(c1));

	short s = 1;
	int num = 0;
	printf("num			: %d\n", num);
	printf("int size	: %d\n", sizeof(int));
	printf("int size	: %d\n\n", sizeof(num));

	float f = 0.123f;
	double d = 1.1234;

	printf("고정 소수점	: %f\n", f);
	printf("부동 소수점	: %e\n", f); // 부동 : not move 가 아님
	printf("float size	: %d\n", sizeof(f));
	printf("double size	: %d\n\n", sizeof(d));

	float sum = 0.1;

	for (int i = 0; i < 1000; i++)
	{
		sum += 0.1;
	}

	printf("0.1을 1000번 더한 합계 : %f\n\n", sum); // ----> 부동소수점에 의한 오차 발생

	bool isDash = false; // 1byte

	printf("대쉬 유무 : %d\n", isDash);

	//overflow, underflow

	//unsigned : 음수를 없애고 양수로 표현할수 있는 양을 2배로 늘림
	unsigned char cc;	//	0 ~ 255
	unsigned short ss;	//	0 ~ 65535
	unsigned int ii;	//	0 ~ 42억

	unsigned char cc2 = 129;
	printf("%d\n", cc2);

	return 0;
}