#include <stdio.h>

/*
	재귀 함수
	- 함수 내에서 자기 자신을 다시 호출하는 함수
*/

void Recursive(int num)
{
	if (num == 0)
		return;		// ---> 반환조건

	printf("hello to myself\n");

	Recursive(num - 1);
}

/*
	팩토리얼 만들기
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
	피보나치 수열 만들기
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
	Recursive(3); // 터짐 ---> 반환조건을 붙여야함

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
	피보나치를 재귀함수로 만들기
*/