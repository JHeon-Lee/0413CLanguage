#include <stdio.h>
#include <stdbool.h> // c ���� bool ��� ����

int main()
{
	int a = 10;
	int b = 20;

	int result = a + b;
	result = a - b;
	result = a * b;
	result = a / b;
	result = a % b;

	result = 0;

	result += a;	//result = result + a;

	int c = 10;
	int d = 20;

	c++; // ���� ������ - ���� �� ����
	++c; // ���� ������ - ���� �� ����
		 // ���� ������
	d--;
	--d;

	c = 0;
	d = 0;

	printf("int ++c : %d\n", ++c);
	printf("int d++ : %d\n", d++);

	printf("int c : %d\n", c);
	printf("int d : %d\n", d);

	/*
		�� ������
		== - equal, != - not equal ===> ����� : bool ��

		> < >= <=
	*/

	/*
		&& - and ������
		|| - or ������
		!  - not ������
	*/
#pragma region Attack

	int playerDamage = 50;
	int enemyHp = 540;

	printf("�÷��̾��� ���ݷ� : %d\n", playerDamage);
	printf("���� ���� ü�� : %d\n\n", enemyHp);

	int attackCount = 0;
	printf("�� �� �����Ͻðڽ��ϱ�? : ");
	scanf_s("%d", &attackCount); // ���� ���� : scanf + #define _CRT_SECURE_NO_WARNINGS �Ǵ�, ������Ʈ �Ӽ� sdl �˻� - �ƴϿ�

	printf("�÷��̾ ���� %d�� ����!\n", attackCount);
	enemyHp -= playerDamage * attackCount;

	printf("���� ���� ü�� : %d\n\n", enemyHp);

#pragma endregion

#pragma region Range
	int grabRange;
	int distance = 300;
	bool catchenemy = true;

	printf("������ �Ÿ� : %d\n", distance);

	printf("�׷� ��Ÿ� : ");
	scanf_s("%d", &grabRange);

	grabRange >= distance ? (catchenemy = true) : (catchenemy = false); // ���׿�����

	printf("���� óġ�Ͽ�����? : %d\n", catchenemy); // true - 1, false - 0

#pragma endregion

	/*
		&& || !

		1. true () false => false : &&
		2. true () false => true  : ||
		3. true () true  => true  : &&, ||
		4. ()true        => false : !
		5. ()false		 => true  : !
	*/

	return 0;
}