#include <stdio.h>

int main()
{
	for (int i = 0; i < 5; i++)
	{
		printf("for�� ��ɾ� %d�� �ݺ�\n", i + 1);
	}

	printf("\n");

	for (int i = 5; i; i--)
	{
		printf("for�� ��ɾ� %d�� �ݺ�\n", i + 1); // ��ǻ�Ͱ� 0�� false�� �����ϹǷ� i = 0 ���� ����ȴ�
	}

	//for (;;)	//	���ѷ���
	//{
	//	printf("���� ����\n");
	//}

	char num1, num2; // �����

	for (; int count = scanf_s("%c %c", &num1, sizeof(num1), &num2, 1);)
	{
	    printf("%d\n", count);
	    while (getchar() != '\n');


	for (int i = 0, j = 0; i < 10 && j < 10; i++, j += 2)
	{
		printf("%d", i);
		printf("%d\n", j);
	}

	printf("\n");

	for (int i = 0; i <= 10; i++)
	{
		if (i % 3 == 0)
		{
			continue;
		}

		printf("%d", i);
	}

	printf("\n\n");

	for (int c = 'A'; c <= 'Z'; c++)
		printf("%c", c);

	for (int c = 'Z'; c <= 'A'; c--)
		printf("%c", c);

	printf("\n\n");

	int total = 0;
	int num = 0;

	printf("0���� num������ ������ ���մϴ�. num : ");
	scanf_s("%d", &num);

	for (int i = 0; i < num; i++)
	{
		total += i;
	}
	printf("��� : %d\n", total);

	printf("\n\n");

	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			printf("*");
		}
		printf("\n");
	}

	for (int i = 1; i < 10; i++)
	{
		printf("***������ %d�� ����!!!***\n", i);

		for (int j = 1; j < 10; j++)
		{
			printf("%d * %d = %2d\n", i, j, i * j); // %2d : �������
		}

		printf("***������ %d�� ��!!!***\n", i);
	}

	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < i + 1; j++)
		{
			printf("*");
		}
		printf("\n");
	}

	return 0;
}

/*
	homework
	*
	**
	***
	****
	*****
	
	*****
	****
	***
	**
	*

	*****
	 **** 
	  *** 
	   ** 
	    *

	    *
	   **
	  ***
	 ****
	*****

	  *
	 ***
	*****
	 ***
	  *

	����� ����
*/