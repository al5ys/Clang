#include <stdio.h>

int main()
{
	/*
	//정수자료형 int
	int a;
	// =은 컴퓨터에서 같다가 아닌 할당한다는 의미.
	a = 3;
	printf("%d\n", a);

	a = 123; //a에 3이 할당되었지만은 123으로 재할당.
	printf("%d\n", a);
	===================================================
	int a, b, c;
	a = 1, b = 2, c = a + b;
	printf("%d\n", c);
	//변수 명명 규칙.
	//영어 대소문자,_ 사용 가능 다만 숫자가 맨 앞 금지.
	//예약어 (이미 만들어진 C언어의 문법단어들. int, float ,return,등등)는 변수명으로 사용 불가.

	//국룰적 변수 이름 설명 : 소문자시작
	//int id;
	//int height;
	//두 단어 이상 합쳐지면...
	// (1)int appStore; -> 낙타(camel)표기법
	// (2)int app_store; ->뱀(snake) 표기법	
	// ex.낙타:int howManyPeopleInThere; 뱀:int how_many_people_in_there
	*/
	int x, y;
	x = 1; 
	y = 3;
	printf("%d%d%d%d%d\n",x,x,x,x,x);
	printf("%d   %d\n", x,x);
	printf("%d%d%d%d%d\n", x, x, x, x, x);
	printf("%d%d%d%d%d\n", y, y, y, y, y);
	printf("%d   %d\n", y, y);
	printf("%d%d%d%d%d\n", y, y, y, y, y);


	return 0;
}