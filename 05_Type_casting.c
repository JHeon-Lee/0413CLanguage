#include <stdio.h>

int main()
{
	short s = 10;
	int i = s;

	float f = 100;

	int i2 = 500;
	char c1 = i2;	// ���� �ڷ��� = ū �ڷ��� ----> ������ �ս� �߻�
	printf("%d\n", c1);

	float f2 = 1.25f;
	int i3 = f2;
	printf("%d\n", i3);

	/*
		�ڷ����� �켱���� (Priority of Datatype)
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
	float div = (float)a / b;	//	������� float���� �����ؾ� 2.000000���� �ȳ���
	printf("%f\n", div);

	return 0;
}