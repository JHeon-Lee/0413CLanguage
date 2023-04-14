#include <stdio.h>
#include <stdbool.h> // c 에서 bool 사용 가능

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

	c++; // 후위 연산자 - 실행 후 증가
	++c; // 전위 연산자 - 증가 후 실행
		 // 증강 연산자
	d--;
	--d;

	c = 0;
	d = 0;

	printf("int ++c : %d\n", ++c);
	printf("int d++ : %d\n", d++);

	printf("int c : %d\n", c);
	printf("int d : %d\n", d);

	/*
		비교 연산자
		== - equal, != - not equal ===> 결과값 : bool 형

		> < >= <=
	*/

	/*
		&& - and 연산자
		|| - or 연산자
		!  - not 연산자
	*/
#pragma region Attack

	int playerDamage = 50;
	int enemyHp = 540;

	printf("플레이어의 공격력 : %d\n", playerDamage);
	printf("현재 적의 체력 : %d\n\n", enemyHp);

	int attackCount = 0;
	printf("몇 번 공격하시겠습니까? : ");
	scanf_s("%d", &attackCount); // 오류 방지 : scanf + #define _CRT_SECURE_NO_WARNINGS 또는, 프로젝트 속성 sdl 검사 - 아니오

	printf("플레이어가 적을 %d번 공격!\n", attackCount);
	enemyHp -= playerDamage * attackCount;

	printf("현재 적의 체력 : %d\n\n", enemyHp);

#pragma endregion

#pragma region Range
	int grabRange;
	int distance = 300;
	bool catchenemy = true;

	printf("적과의 거리 : %d\n", distance);

	printf("그랩 사거리 : ");
	scanf_s("%d", &grabRange);

	grabRange >= distance ? (catchenemy = true) : (catchenemy = false); // 삼항연산자

	printf("적을 처치하였나요? : %d\n", catchenemy); // true - 1, false - 0

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