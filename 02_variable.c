#include <stdio.h>

int main()
{
	int a; // declaration (변수 설정)
	a = 10; // initialize (초기화)

	printf("a의 숫자는 %d 이다\n\n", a);
	printf("%d %d %d\n", 10, 20, 30);

	/*
		format specifier vs conversion specifier
	*/

	int b = 20; // 선언과 동시에 초기화 가능, = : 대입 연산자
	printf("b : %d\n", b);
	
	b = 30;
	printf("b : %d\n", b);

	int result = a + b;
	printf("%d + %d = %d\n", a, b, result);

	int i_age;		// hungarian 표기법

	int hpCount;	// camel 표기법
	int HpCount;	// pascal 표기법
	int hp_count;	// snake 표기법

	// 1a (X), 띄어쓰기 X, 키워드 X(int int), 식별자 X

	return 0;
}

/*
	조사과제
	escape sequence,
	format specifier
	종류 조사하기
*/

/*
	Escape Sequence
	정의 : 컴퓨터와 주변 기기의 상태를 바꾸는 데에 쓰이는 일련의 문자열
	백슬래시(\) 한 뒤에 한 문자나 숫자 조합이 오는 문자 조합

	종류 및 쓰임새
	\a		:	벨(경고)
	\b		:	백스페이스
	\f		:	폼 피드 -- 특정 기호 출력, 다음 페이지의 시작 부분으로 넘어가는 의미
	\n		:	줄 바꿈
	\r		:	캐리지 리턴 -- 현재 커서위치를 맨 앞으로 이동시켜 출력
	\t		:	가로 탭
	\v		:	세로 탭
	\'		:	작은 따옴표
	\"		:	큰 따옴표
	\\		:	백슬래시
	\?		:	리터럴 물음표
	\ooo	:	8진수 표기법의 ASCII 문자
	\xhh	:	16진수 표기법의 ASCII 문자
	\xhhhh	:	이 Escape Sequence가 와이드 문자 상수 또는 유니코드 문자열 리터럴에 사용되는 경우
				16진수 표기법의 유니코드 문자.


	Format Specifier : 서식 지정자
	%c		:	하나의 문자
	%s		:	문자열
	%d		:	부호 있는 10진 정수
	%i		:	부호 있는 10진 정수(%d와 동일)
	%f		:	고정 소수점으로 표현한 실수(소수점 이하 6자리 까지 표현)
	%o		:	부호 없는 8진 정수
	%u		:	부호 없는 10진 정수
	%x		:	부호 없는 16진 정수(소문자 사용)
	%X		:	부호 없는 16진 정수(대문자 사용)
	%e		:	부동 소수점으로 표현한 실수(e-표기법)
	%E		:	부동 소수점으로 표현한 실수(E-표기법)
	%g		:	값에 따라 %f나 %e를 사용함
	%G		:	값에 따라 %F나 %E를 사용함
	%%		:	퍼센드(%) 기호 출력
*/