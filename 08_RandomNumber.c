#include <stdio.h>
#include <stdlib.h>		// rand �Լ��� �ʿ�
#include <time.h>		// time �Լ��� �ʿ�

int main()
{
	printf("%d ", rand() % 10 + 1);
	printf("%d ", rand() % 10 + 1);
	printf("%d ", rand() % 10 + 1);
	printf("%d ", rand() % 10 + 1);
	printf("%d ", rand() % 10 + 1);
	printf("\n\n");

	srand((unsigned int)time(NULL));
	rand();

	printf("%d ", rand() % 10 + 1);
	printf("%d ", rand() % 10 + 1);
	printf("%d ", rand() % 10 + 1);
	printf("%d ", rand() % 10 + 1);
	printf("%d ", rand() % 10 + 1);
	printf("\n\n");

	return 0;
}

/*
	homework
	���� ���� �� ���� �����
	���� 10�� �̱�� ����
*/