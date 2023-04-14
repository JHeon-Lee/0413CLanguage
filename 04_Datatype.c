#include <stdio.h>
#include <stdbool.h> // c++���� �ʿ������ c���� �ʿ�
/*
	Data Type ( �ڷ��� )
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
	printf("character c2	: %c\n", c2); // ASCII Code �� ���� 65 -> A �ش�
	printf("character size	: %d\n", sizeof(char));
	printf("character size	: %d\n\n", sizeof(c1));

	short s = 1;
	int num = 0;
	printf("num			: %d\n", num);
	printf("int size	: %d\n", sizeof(int));
	printf("int size	: %d\n\n", sizeof(num));

	float f = 0.123f;
	double d = 1.1234;

	printf("���� �Ҽ���	: %f\n", f);
	printf("�ε� �Ҽ���	: %e\n", f); // �ε� : not move �� �ƴ�
	printf("float size	: %d\n", sizeof(f));
	printf("double size	: %d\n\n", sizeof(d));

	float sum = 0.1;

	for (int i = 0; i < 1000; i++)
	{
		sum += 0.1;
	}

	printf("0.1�� 1000�� ���� �հ� : %f\n\n", sum); // ----> �ε��Ҽ����� ���� ���� �߻�

	bool isDash = false; // 1byte

	printf("�뽬 ���� : %d\n", isDash);

	//overflow, underflow

	//unsigned : ������ ���ְ� ����� ǥ���Ҽ� �ִ� ���� 2��� �ø�
	unsigned char cc;	//	0 ~ 255
	unsigned short ss;	//	0 ~ 65535
	unsigned int ii;	//	0 ~ 42��

	unsigned char cc2 = 129;
	printf("%d\n", cc2);

	return 0;
}