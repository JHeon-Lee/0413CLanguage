#include <stdio.h>

int getInt(void)
{
	int i;

	printf("���ڸ� �Է����ּ��� : ");
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
	printf("���� ����? : %d\n", num);

	return; // ��� ��
}

void test()
{
	printf("11111111111\n");

	return;

	printf("2222222222222\n"); // --> ��� �ȵ�
}

int Compare(int num1, int num2)
{
	if (num1 > num2)
		return num1;
	else
		return num2;
}

// ���� �ϰ� main �ؿ� �����ص� ��

int main()
{
	int x1 = 0;
	int y1 = 0;

	//printf("���ڸ� �Է����ּ��� : ");
	//scanf_s("%d", &x1);
	
	//printf("���ڸ� �Է����ּ��� : ");
	//scanf_s("%d", &y1);

	x1 = getInt();
	y1 = getInt();

	printf("%d + %d = %d\n\n", x1, y1, add(x1, y1));

	int num = getInt();
	ShowNumber(num);

	printf("�� �� �� ū ����? : %d\n", Compare(x1, y1));

	test();

	return 0;
}