#include <stdio.h>

int main()
{
	int number = 0;
	printf("������ �Է����ּ��� : ");
	scanf_s("%d", &number);

	if (number % 2 == 0)
		printf("¦�� �Դϴ�\n");

	if (number % 2 != 0) // else �� �ص� �������
	{
		printf("¦���� �ƴմϴ�\n");
		printf("Ȧ�� �Դϴ�\n");
	}

	char key;

	printf("���� ���ó���? : ");
	scanf_s(" %c", &key, sizeof(key)); // char ���� sizeof ���� ����� ������

	if (key == 'w')
		printf("��\n");
	else if (key == 's')
		printf("��\n");
	else if (key == 'a')
		printf("��\n");
	else if (key == 'd')
		printf("��\n");
	else
		printf("�߸� �������ϴ�\n");

	int number2;
	printf("���ڸ� �Է����ּ��� :");
	scanf_s("%d", &number2);

	if (number2 < 10 && number2 > 0)
	{
		if (number2 <= 5)
			printf("5���� �۰ų� ���� �� �Դϴ�.\n");
		else
			printf("5���� ũ�� 10���� ���� �� �Դϴ�.\n");
	}
	else
		printf("10���� ũ�ų� ���� �� �Դϴ�.\n");

	// scanf_s ���� char �� ������ ��ĭ ���� ����
	char c1, c2;
	int d;

	printf("���ڸ� �Է��Ͻÿ� : ");
	scanf_s("%c", &c1);
	
	printf("������ �Է��Ͻÿ� : ");
	scanf_s("%d", &d);	

	getchar(); // ��������� ���ۿ� enter�� �ȳ��� ����

	printf("���ڸ� �Է��Ͻÿ� : ");
	scanf_s("%c", &c2);

	printf("c1 : %c\n, d : %d\n, c2 : %c\n");

	/*
		homework
		�빮�ڸ� �Է��ϸ� �ҹ��ڷ�,
		�ҹ��ڸ� �Է��ϸ� �빮�ڷ�
		��µǴ� ���α׷� �����
	*/

	return 0;
}