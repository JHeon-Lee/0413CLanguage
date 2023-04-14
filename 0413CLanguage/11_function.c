#include <stdio.h>

int getInt(void)
{
	int i;

	printf("숫자를 입력해주세요 : ");
	scanf_s("%d", &i);

	return i;
}

int add(int x, int y)
{
	int result = x + y;

	return result;
}

void ShowNumber(int num)
{
	printf("들어온 값은? : %d\n", num);

	return; // 없어도 됨
}

void test()
{
	printf("11111111111\n");

	return;

	printf("2222222222222\n"); // --> 출력 안됨
}

int Compare(int num1, int num2)
{
	if (num1 > num2)
		return num1;
	else
		return num2;
}

// 선언만 하고 main 밑에 정의해도 됨

int main()
{
	int x1 = 0;
	int y1 = 0;

	//printf("숫자를 입력해주세요 : ");
	//scanf_s("%d", &x1);
	
	//printf("숫자를 입력해주세요 : ");
	//scanf_s("%d", &y1);

	x1 = getInt();
	y1 = getInt();

	printf("%d + %d = %d\n\n", x1, y1, add(x1, y1));

	int num = getInt();
	ShowNumber(num);

	printf("둘 중 더 큰 수는? : %d\n", Compare(x1, y1));

	test();

	return 0;
}