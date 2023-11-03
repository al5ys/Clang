#include <stdio.h>

int main() {
	/*
	//문자 1개를 입력받고 입력받은 문자가 알파벳인지 아닌지 판단을 하는 프로그램(알파벳이면 1 , 아니면 0)
	char ch;
	printf("문자 하나를 입력하세요 : ");
	scanf_s("%c", &ch);
	int a;
	a = ch - 97;
	if ((0 <=a && a<= 25)||(-32<=a&&a<=-7)) {
		printf("1\n");
	}
	else {
		printf("0\n");
	}

	//각에서 0도 초과 90도 미만 예각
	int angle;
	printf("각을 기입하세요 : ");
	scanf_s("%d", &angle);
	if (0 < angle && angle < 90)
		printf("1\n");
	else if (90 == angle)
		printf("2\n");
	else if (90 < angle && angle < 180)
		printf("3\n");
	else if (180 == angle)
		printf("4\n");
	else
		printf(" \n");

	//문제3 
	int x, y;
	printf("첫번째 정수를 입력하세요(x좌표 값) : ");
	scanf_s("%d", &x);
	printf("두번째 정수를 입력하세요(y좌표 값) : ");
	scanf_s("%d", &y);

	if (x > 0 && y > 0) printf("1사분면\n");
	else if (x < 0 && y > 0) printf("2사분면\n");
	else if (x < 0 && y < 0) printf("3사분면\n");
	else printf("4사분면\n");
	
	*/
	/*
	//혼자 문제 만들어보기.
	int b;
	char c;
	scanf_s("%d", &b);
	printf("자 골랐죠?\n");
	scanf_s("%c", &c);
	printf("그럼 이제 시작합니다.\n엔터를 눌러보세요~~");
	getchar();
	scanf_s("%c", &c);
	switch (b) {
	case 1:
		printf("1번을 선택하셨습니다.\n");
		break;
	case 2:
		printf("2번을 선택하셨습니다.\n");
		break;
	case 3:
		printf("3번을 선택하셨습니다\n");
		break;
	default:
		printf("수고하셨습니다.\n");
		break;
	}
	*/
	
	
		return 0;
}