#include <stdio.h>

int main()
{
	short s = 10;
	int i = s;

	float f = 100;

	int i2 = 500;
	char c1 = i2;	// 작은 자료형 = 큰 자료형 ----> 데이터 손실 발생
	printf("%d\n", c1);

	float f2 = 1.25f;
	int i3 = f2;
	printf("%d\n", i3);

	/*
		자료형의 우선순위 (Priority of Datatype)
		long double > double > float
		unsigned long long	==	long long
		unsigned long		==	long
		unsigned int		==	int
		unsigned short		==	short
		unsigned char		==	char
		bool
	*/

	f2 = 10 + 1.25;
	printf("%f\n\n", f2);

	int a = 10, b = 4;
	float div = (float)a / b;	//	결과값을 float으로 변경해야 2.000000으로 안나옴
	printf("%f\n", div);

	return 0;
}