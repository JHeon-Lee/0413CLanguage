#include <stdio.h>
#include <stdbool.h>	// c ���� bool �� �ʿ�, c++ �� �ʿ����
#include <conio.h>		// (console input output) => _getch �� �ʿ�

int main()
{
	bool study = true;

	while (study)
	{
		printf("Hello World!\n");

		printf("�������ΰ���? [�� : 1, �ƴϿ� : 0] => ");
		int answer = -1;

		scanf_s("%d", &answer);

		if (answer == 0)
			study = false; // break;
	}

	char key;

	while (true)
	{
		printf("�̵�Ű �Է�[w : ��, s : ��, a : ��, d : ��] => ");
		key = _getch(); // ���� ���� ���� �Է� ����

		if (key == 'q') // switch Ż�ⱸ���� ���� ���°� ����
			break;

		switch (key)
		{
		case 'w': printf("��\n"); break;
		case 's': printf("��\n"); break;
		case 'a': printf("��\n"); break;
		case 'd': printf("��\n"); break;
		default : printf("�߸� ����\n"); break;
		}
	}

	printf("\n");

	const int secretCode = 123456; // const : ���ȭ

	int password = 0;
	int tryCount = 0;
	
	do        // �� �Ⱦ�, �˾Ƶθ� ����
	{
		if (tryCount >= 5)
		{
			printf("5ȸ ����, ������ ��ݵ˴ϴ�.\n");
			break;
		}
		
		printf("��й�ȣ �Է�(5ȸ ���� �� ���, ���� �õ� Ƚ�� : %d) => ", tryCount);
		scanf_s("%d", &password);

		tryCount++;

	} while (password != secretCode);

	return 0;
}

/*
	homework
	Up Down Game
	1 ~ 100, ��ȸ : 10��
	���� ���� ã��
*/