#include <stdio.h>

/*
	��� �Լ�
	- �Լ� ������ �ڱ� �ڽ��� �ٽ� ȣ���ϴ� �Լ�
*/

void Recursive(int num)
{
	if (num == 0)
		return;		// ---> ��ȯ����

	printf("hello to myself\n");

	Recursive(num - 1);
}

/*
	���丮�� �����
	n! = n * (n-1) * (n-2) .... * (n - (n - 1)) .. * 2 * 1
	0! == 1
*/

int Factorial(int n)
{
	if (n == 0)
		return 1;

	return n * Factorial(n - 1);
}

/*
	�Ǻ���ġ ���� �����
	0 1 1 2 3 5 8 13 ...

	0
	1
	0 + 1
	1 + 1
	1 + 2
	2 + 3
	3 + 5
*/

void Fibonacci(int n)
{
	int f1 = 0, f2 = 1, f3;

	if (n == 1)
		printf("%d", f1);
	else
		printf("%d %d", f1, f2);

	for (int i = 2; i < n; i++)
	{
		f3 = f1 + f2;
		printf("%d", f3);

		f1 = f2;
		f2 = f3;
	}
}

int main()
{
	Recursive(3); // ���� ---> ��ȯ������ �ٿ�����

	int n;
	scanf_s("%d", &n);

	printf("%d\n", Factorial(n));

	int num;
	scanf_s("%d", &num);

	Fibonacci(num);

	return 0;
}

/*
	homework
	�Ǻ���ġ�� ����Լ��� �����
*/