#include <stdio.h>

#define GameStart 1
#define GameManual 2
#define Option 3
#define GameOver 4

int main()
{
	int selmenu;
	printf("�޴��� �����ϼ��� [1. ���� ����, 2. ���� ����, 3. ����, 4. ����] => ");
	scanf_s("%d", &selmenu);

	switch (selmenu)
	{
	case GameStart:
		printf("���� ����!!\n");
		break;						//	�Ȱɾ��ָ� ���� case ���� ��� ������
	case GameManual:
		printf("���� ����\n");
		break;
	case Option:
		printf("���� ����\n");
		break;
	case GameOver:
		printf("���� ����\n");
		break;
	default:
		printf("�߸��� �Է��Դϴ�.\n");
		break;
	}

	printf("\n");

	int time = 0;
	int count = 0;

	printf("�ð��� �Է����ּ��� : ");
	scanf_s("%d", &time);

	if (time < 12)
		count = 1;
	else if (time > 12)
		count = 2;
	else
		count = 3;

	switch (count)
	{
	case 1:						//	���� ������ : case 1: �ؿ� case 2: --- �̷���
		printf("���� �Դϴ�\n");
		break;
	case 2:
		printf("���� �Դϴ�\n");
		break;
	case 3:
		printf("���� �Դϴ�\n");
		break;
	default:
		break;
	}

	return 0;
}