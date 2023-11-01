#include <Stdio.h>

int main()
{
	
	//문제1 연도를 나타내는 양의 정수를 입력받아 윤년인지 평년인지 출력하는 프로그램 
	//1.연도가 4로 나뉘면 윤년이다.
	//2.1의 조건이 만족해도 100으로 나누어 떨어지면 평년이다.
	//3.2의 조건을 만족해도 400으로 나누어 떨어지면 윤년이다.
	//ex. 2016 윤년 2017 평년
	/*
	int year;
	printf("연도를 입력하시오 : ");
	scanf_s("%d", &year);
	*/
	/*
	if (year % 4 == 0) {
		if (year % 100 == 0 && year % 400 == 0) printf("%d -> 윤년", year);
		else if (year % 100 == 0) printf("%d -> 평년", year);
		else printf("%d -> 윤년", year);

	}
	else printf("%d -> 평년",year);
	*/
	//int divisibleBy4 = year%4==0;
	//int notDivisibleBy100 = year%100!=0;
	//int divisibleBy400=year%400==0;
	//int isLeapYear=((divisibleBy4&&notDivisibleBy100)||divisibleBy400)
	//if(isLeapYear) printf("%d년도는 윤년입니다.",year);
	//else printf("%d년도는 평년입니다.",year);
	/*
	if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0) {
		printf("%d년도는 윤년입니다.", year);
	}
	else printf("%d년도는 평년입니다.", year);
	*/

	//문제2 음료의 종류는 타나내는 1~3사이의 정수와 투입한 금액을 정수를 입력받고 선택한 음료이름과
	//거스름돈을 출력하는 프로그램 작성
	//1.아메리카노 500원 라떼400원 레몬티 300원
	//2.
	int bv, money;
	printf("음료를 선택하세요 : ");
	scanf_s("%d", &bv);
	printf("투입한 금액을 입력하세요 : ");
	scanf_s("%d", &money);

	int pr;
	
	switch (bv) {
	case 1:
		pr = 500;
		break;

	case 2:
		pr = 400;
		break;
	case 3:
		pr = 300;
		break;
	default:
		printf("해당음료는 없습니다.");
		break;
	}
	if (money < pr) {
		printf("금액이 부족합니다.");
		
	}
	
	int change = money - pr;
	int five = change / 500;
	int hundred = (change % 500) / 100;
	switch(bv){
	case 1:
		printf("아메리카노 / 잔돈 : 500원 :%d개 , 100원 : %d개", five, hundred);
		break;
	case 2:
		printf("라떼 / 잔돈 : 500원 :%d개 , 100원 : %d개", five, hundred);
		break;
	case 3:
		printf("레몬티 / 잔돈 : 500원 :%d개 , 100원 : %d개", five, hundred);
		break;
	}
	
		
	
	return 0;
}